from langchain_openai import ChatOpenAI
from langchain_anthropic import ChatAnthropic
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import  RunnableBranch, RunnableLambda
from langchain_core.output_parsers import PydanticOutputParser
from pydantic import BaseModel, Field
from typing import Literal

load_dotenv()

model = ChatOpenAI()
model2 = ChatAnthropic(model_name='claude-3-haiku-20240307')
parser = StrOutputParser()

class NewsClassification(BaseModel):

    classification: Literal['constructive', 'destructive'] = Field(description='Classify the news as constructive or destructive')

parser2 = PydanticOutputParser[NewsClassification](pydantic_object=NewsClassification)

prompt1 = PromptTemplate(
    template='Classify the following news article as constructive or destructive. Constructive news promotes positive change, solutions, or beneficial outcomes. Destructive news spreads negativity, problems without solutions, or harmful content. \n {news} \n {format_instruction}',
    input_variables=['news'],
    partial_variables={'format_instruction':parser2.get_format_instructions()}
)

classifier_chain = prompt1 | model | parser2

prompt2 = PromptTemplate(
    template='The following news is classified as constructive. Analyze and explain the potential negative consequences or cons that this news may have in 50 words: \n {news}',
    input_variables=['news']
)

prompt3 = PromptTemplate(
    template='The following news is classified as destructive. Provide solutions and recommendations to make this situation better or address the issues mentioned in 50 words: \n {news}',
    input_variables=['news']
)

branch_chain = RunnableBranch(
    (lambda x:x.classification == 'constructive', prompt2 | model2 | parser),
    (lambda x:x.classification == 'destructive', prompt3 | model2 | parser),
    RunnableLambda(lambda x: "could not classify news")
)

chain = classifier_chain | branch_chain

news_input = {'news': 'Google is now trying to build the datacentres in the space for optimal internet speed and cooling'}

# Get classification from model1
classification_result = classifier_chain.invoke(news_input)
print(f"Classification: {classification_result.classification}")

# Get the full response
response = chain.invoke(news_input)
print(f"\nResponse:\n{response}")

chain.get_graph().print_ascii()
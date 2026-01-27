from langchain_openai import ChatOpenAI
from langchain_anthropic import ChatAnthropic
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser

load_dotenv()

model1 = ChatOpenAI()
model2 = ChatAnthropic(model_name="claude-3-haiku-20240307")

parser = StrOutputParser()

question_prompt = PromptTemplate(
    template="Generate 3 clear and concise questions about the following topic\n{topic}",
    input_variables=["topic"]
)

answer_prompt = PromptTemplate(
    template="Answer the following questions clearly and concisely\n{questions}",
    input_variables=["questions"]
)

question_chain = question_prompt | model1 | parser
answer_chain = answer_prompt | model2 | parser

sequential_chain = question_chain | answer_chain

topic = "Machine Learning Intern Jobs and salaries in the USA"

result = sequential_chain.invoke({"topic": topic})

print(result)

# Working with LLMs that donot support structured outputs by using output parsers that can do this job
# Output Parsers in LangChain help convert raw LLM responses into structured formats like JSON, CSV, Pydantic models, and more. They ensure consistency, validation, and ease of use in applications.

#String output parser
 
from langchain_openai import ChatOpenAI # will work with any type of API
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser

load_dotenv()


model = ChatOpenAI()

# 1st prompt -> detailed report
template1 = PromptTemplate(
    template='Write a detailed report on {topic}',
    input_variables=['topic']
)

# 2nd prompt -> summary  Without it: Error! Template gets an object, not a string
template2 = PromptTemplate(
    template='Write a 100 words summary on the following text. /n {text}',
    input_variables=['text']
)

# String output parser
parser = StrOutputParser()

chain = template1 | model | parser | template2 | model | parser

result = chain.invoke({'topic':'black hole'})

print(result)

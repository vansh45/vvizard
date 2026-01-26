# from langchain_huggingface import ChatHuggingFace, HuggingFaceEndpoint
from dotenv import load_dotenv
from langchain_openai import ChatOpenAI

from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import PydanticOutputParser
from pydantic import BaseModel, Field

load_dotenv()

# Define the model
# llm = HuggingFaceEndpoint(
#     repo_id="google/gemma-2-2b-it",
#     task="text-generation"
# )


# model = ChatHuggingFace(llm=llm)
model = ChatOpenAI()

class Person(BaseModel):

    summary: str = Field(description='Summary of the job')
    working_domain: str = Field(description='Working domain of the job')
    location: str = Field(description='Location of the job')
    average_salary: int = Field(description='Average salary of the job')

parser = PydanticOutputParser(pydantic_object=Person)

template = PromptTemplate(
    template='Give me summary, working domain, location, salary range on following job title: {job} \n {format_instruction}',
    input_variables=['job'],
    partial_variables={'format_instruction': parser.get_format_instructions()}
)

chain = template | model | parser

final_result = chain.invoke({'job':'software engineer'})
print(final_result)
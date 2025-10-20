from langchain_openai import ChatOpenAI
from dotenv import load_dotenv
import os

load_dotenv()

if not os.getenv("OPENAI_API_KEY"):
    raise ValueError("OPENAI_API_KEY not found in environment variables")

llm = ChatOpenAI(
    model="gpt-4o-mini",
)

res = llm.invoke("what is the average salary of a ML/Computer vision/AI intern who is pursuing a masters degree in USA? tell me per hour rates and monthly rates")
print(res)
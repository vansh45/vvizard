from langchain_huggingface import HuggingFaceEndpoint, ChatHuggingFace
from dotenv import load_dotenv
import os

load_dotenv()
HF_API_KEY = os.getenv("HF_API_KEY")

llm = HuggingFaceEndpoint(
    repo_id="mistralai/Mistral-7B-Instruct-v0.2",  # Better chat model
    task="text-generation",
    huggingfacehub_api_token=HF_API_KEY,
    max_new_tokens=512,
    temperature=0.7
)

model = ChatHuggingFace(llm=llm)
res = model.invoke("what is the average salary of a ML/Computer vision/AI intern?")
print(res.content)
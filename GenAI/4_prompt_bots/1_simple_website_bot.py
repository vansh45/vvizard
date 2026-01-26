# Static prompt website bot

from langchain_openai import ChatOpenAI
from dotenv import load_dotenv
import streamlit as st

load_dotenv()

llm = ChatOpenAI(model="gpt-4o-mini", temperature=0.1)

st.title("Simple Website Bot")

st.write("This is a simple website bot that can answer questions")

st.write("Enter a question below to get started.")
user_input = st.text_input("Question:")

if st.button("Submit"):
    response = llm.invoke(user_input, max_tokens=300)
    st.write(response.content)
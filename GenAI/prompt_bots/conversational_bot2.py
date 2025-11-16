from langchain_core.messages import SystemMessage, HumanMessage, AIMessage
from langchain_openai import ChatOpenAI
from dotenv import load_dotenv
import streamlit as st

load_dotenv()

model = ChatOpenAI()

chat_history = [
    SystemMessage(content = 'You have to answer in 1st person format using present continuous tense')
]

while True:
    user_input = input("You: ")
    if user_input == "exit":
        break

    # Add human message
    chat_history.append(HumanMessage(content=user_input))

    # Invoke the model
    result = model.invoke(chat_history)

    # Add AI message to history
    chat_history.append(AIMessage(content=result.content))

    print("AI:", result.content)

print(chat_history)
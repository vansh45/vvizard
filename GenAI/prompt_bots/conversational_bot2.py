from langchain_core.messages import SystemMessage, HumanMessage, AIMessage
from langchain_core.prompts import ChatPromptTemplate
from langchain_openai import ChatOpenAI
from dotenv import load_dotenv

load_dotenv()

model = ChatOpenAI()

chat_template = ChatPromptTemplate.from_messages([
    ("system", "First give a 2 sentence introduction about the {topic} and then you have to answer in first person using present continuous tense"),
    ("human", "{user_input}")
])

topic = input("Enter topic: ")

chat_history = []

while True:
    user_input = input("You: ")
    if user_input == "exit":
        break

    formatted_messages = chat_template.format_messages(
        topic=topic,
        user_input=user_input
    )
 
    full_context = chat_history + formatted_messages
    result = model.invoke(full_context)

    chat_history.extend(formatted_messages)
    chat_history.append(AIMessage(content=result.content))

    print("AI:", result.content)

print(chat_history)

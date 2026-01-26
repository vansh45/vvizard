from dotenv import load_dotenv
load_dotenv()

from langchain_core.messages import HumanMessage, AIMessage
from langchain_core.prompts import ChatPromptTemplate, MessagesPlaceholder
from langchain_openai import ChatOpenAI
import os

model = ChatOpenAI()

chat_template = ChatPromptTemplate.from_messages([
    ('system', 'You are a career advisor'),
    MessagesPlaceholder(variable_name='chat_history'),
    ('human', '{query}')
])

history_path = 'GenAI/prompt_bots/chat_history.txt'
chat_history = []

if not os.path.exists(history_path):
    os.makedirs(os.path.dirname(history_path), exist_ok=True)
    with open(history_path, 'w'):
        pass

with open(history_path) as f:
    for line in f:
        line = line.strip()
        if line:
            if line.startswith('AI: '):
                chat_history.append(AIMessage(content=line[4:]))
            else:
                chat_history.append(HumanMessage(content=line))

while True:
    user_input = input("You: ")
    if user_input.lower() == "exit":
        break

    chat_history.append(HumanMessage(content=user_input))

    messages = chat_template.format_messages(
        chat_history=chat_history,
        query=user_input
    )

    result = model.invoke(messages)
    print("AI:", result.content)
    chat_history.append(AIMessage(content=result.content))

with open(history_path, 'w') as f:
    for msg in chat_history:
        if isinstance(msg, HumanMessage):
            f.write(msg.content + "\n")
        else:
            f.write("AI: " + msg.content + "\n")

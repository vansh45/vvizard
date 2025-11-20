from langchain_openai import ChatOpenAI
from dotenv import load_dotenv
import streamlit as st
from langchain_core.prompts import PromptTemplate, load_prompt

# Load environment variables
load_dotenv()

# Initialize model
llm = ChatOpenAI(model="gpt-4o-mini", temperature=0.5, max_tokens=500)

# Streamlit UI
st.title("Dynamic Prompt Website Bot")

job_input = st.selectbox("Job", [
    'Machine Learning Engineer', 'Software Engineer', 'Computer Vision Engineer',
    'AI Engineer', 'ML/AI Intern', 'Data Scientist', 'Data Analyst', 'Data Engineer'
])

location_input = st.text_input("Location (optional):", placeholder="e.g., San Francisco, CA or Remote or USA")
style_input = st.selectbox("Style:", ["Technical", "Non-Technical"])
length_input = st.selectbox("Length:", ["Short (1 to 2 sentences)", "Medium (2 paragraphs)", "Long (400 words essay)"])
prompt_template = load_prompt('prompt_bots/template.json')

# Define prompt template with placeholders

if st.button("Submit"):
    # Fill the prompt template dynamically
    chain = prompt_template | llm
    final_prompt = chain.invoke({
        'job_input' : job_input,
        'style_input' : style_input,
        'length_input' : length_input,
        'location_input' : location_input if location_input else "General location"}
    )

    # Generate the response
    



    st.subheader("Job Summary Output:")
    st.write(final_prompt.content)

from langchain_openai import ChatOpenAI
from dotenv import load_dotenv
import streamlit as st
from langchain_core.prompts import PromptTemplate

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

# Define prompt template with placeholders
prompt_template = PromptTemplate(
    template="""
Please summarize the job titled "{job_input}" with the following specifications:
Explanation Style: {style_input}
Explanation Length: {length_input}

1. Job Summary
Provide a clear explanation of what the job is about, following the given explanation style and length.

2. Working Domain & Location
If available:
- Describe the industry or domain (e.g., healthcare, software, finance, etc.)
- Describe the typical location(s) or work mode (remote, hybrid, on-site, etc.)
Location context (if any): {location_input}

3. Average Salary 
- Provide relevant average salary information based on general industry knowledge for this role
- Include typical salary ranges even if approximate

Please provide helpful and informative content. Use your knowledge to fill in typical information about this role. It's better to provide general, helpful information rather than saying information is unavailable. Make reasonable estimates based on industry standards when specific data isn't available.

If certain information is not available in the job, respond with: "Insufficient Information available" instead of guessing.
Ensure the summary is clear, accurate, and aligned with the provided style and length.""",
input_variables=["job_input", "style_input", "length_input", "location_input"],
validate_template = True
)
if st.button("Submit"):
    # Fill the prompt template dynamically
    final_prompt = prompt_template.format(
        job_input=job_input,
        style_input=style_input,
        length_input=length_input,
        location_input=location_input if location_input else "General location"
    )

    # Generate the response
    response = llm.invoke(final_prompt)

    # Display the result
    cleaned_response = (
        response.content
        .replace("_", "")  # remove stray underscores that cause italics
        .replace("to", " to ")  # ensure spacing around 'to'
    )

    # 🖋️ Display the result using Markdown for nicer formatting
    st.subheader("Job Summary Output:")
    st.markdown(cleaned_response, unsafe_allow_html=True)
from langchain_core.prompts import PromptTemplate

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

prompt_template.save('template.json')
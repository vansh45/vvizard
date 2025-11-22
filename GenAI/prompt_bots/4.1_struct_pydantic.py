from langchain_openai import ChatOpenAI
from dotenv import load_dotenv
from typing import Optional, Literal
from pydantic import BaseModel, Field

load_dotenv()

model = ChatOpenAI()

# schema
class JobInfo(BaseModel):
    title: str = Field(description="Job title")
    employer: Optional[str] = Field(default=None, description="Name of the hiring company")
    salary_range: str = Field(description="Salary range for the role")
    field: Literal["technical", "research", "other"] = Field(description="Type of job field")
    education: Optional[str] = Field(default=None, description="Preferred education level")
    experience: int = Field(description="Years of experience required")
    location: str = Field(description="Primary work location")
    work_type: Literal["remote", "hybrid", "onsite"] = Field(description="Work arrangement")
    skills: list[str] = Field(description="Skills required for the job")
    responsibilities: list[str] = Field(description="Key responsibilities in the role")

structured_model = model.with_structured_output(JobInfo)
result = structured_model.invoke("""Extract all relevant information about the following job description and fill the JobInfo schema. Use only what is present in the text and avoid adding anything that is not stated.

Job description:
locations
San Jose, California, United States of America
time type
Full time
posted on
Posted 28 Days Ago
time left to apply
End Date: May 29, 2026 (30+ days left to apply)
job requisition id
JR00014185
At ABB, we help industries outrun - leaner and cleaner. Here, progress is an expectation - for you, your team, and the world. As a global market leader, we’ll give you what you need to make it happen. It won’t always be easy, growing takes grit. But at ABB, you’ll never run alone. Run what runs the world.

This role sits within ABB's Robotics business, a leading global robotics company. We're entering an exciting new chapter as we’ve announced the plan for SoftBank Group to acquire ABB Robotics. SoftBank is a globally recognized technology group and investor/operator focused on AI, robotics, and next-generation computing.  By joining us now, you’ll be part of a pioneering team shaping the future of robotics—working alongside world-class experts in a fast-moving, innovation-driven environment.

This Position reports to:

R&D Principal Engineer



As an intern, you will have the opportunity to gain practical experience through various projects. Each day, you will acquire knowledge by performing tasks as directed. You will also showcase your skills by supporting ABB’s operations and enhancing personal education/employment opportunities.

The work model for the role is onsite/hybrid in San Jose, CA.

You will be mainly accountable for:

Contribute to robotics research projects, including AMMR (Autonomous Mobile Manipulation Robot) and Physical AI.

Design and implement demos such as AMMR navigation, electronics inspection, or next-generation robotics showcases.

Support path planning research with focus on collision-free (CFree) planning.

Collaborate with the external teams on electronics inspection prototypes and testing.

Explore and prototype “cool demos” that highlight robotics innovation and real-world application.

Help prepare reports and presentations for management review.

Participate in cross-functional projects to enhance R&D efficiency.

Engage in team meetings and contribute ideas for optimizing R&D operations.

Perform administrative tasks as needed to support the R&D team.

Qualifications for the role:

Currently enrolled in a graduate or PhD program in Robotics, Mechanical Engineering, Computer Science, Electrical Engineering, or a related field in the United States.

Strong background in robotics algorithms, especially motion planning and/or perception.

Experience with robotic simulation tools (e.g., ROS, Gazebo, Isaac Sim) or path planning libraries is a plus.

Familiarity with electronics inspection or computer vision techniques.

Intern must have reliable transportation to and from the worksite.

Utilize critical thinking skills to analyze complex situations and develop strategic solutions.

Effectively organize and prioritize tasks to meet deadlines.

Exhibit the capability to manage several tasks at once while maintaining high standards of quality.

Collaborate with team members to convey ideas, share information, and provide updates on project progress.

Why ABB?  

What's in it for you

We want you to bring your full self to work—your ideas, your energy, your ambition. You’ll have the tools and freedom to grow your skills, shape your path, and take on challenges that matter. Here, your work creates impact you can see and feel, every day.

ABB is an Equal Employment Opportunity and Affirmative Action employer for protected Veterans and Individuals with Disabilities at ABB.

All qualified applicants will receive consideration for employment without regard to their- sex (gender identity, gender expression, sexual orientation), marital status, citizenship, age,  race and ethnicity, inclusive of traits historically associated with race or ethnicity, including but not limited to hair texture and protective hairstyles, color, religious creed, national origin, pregnancy, physical or mental disability, genetic information, protected Veteran status, or any other characteristic protected by federal and state law.

For more information regarding your (EEO) rights as an applicant, please visit the following websites: https://www.eeoc.gov/sites/default/files/2023-06/22-088_EEOC_KnowYourRights6.12ScreenRdr.pdf

As an Equal Employment Opportunity and Affirmative Action Employer for Protected Veterans and Individuals with Disabilities, applicants may request to review the plan of a particular ABB facility between the hours of 9:00 A.M. - 5:00 P.M. EST Monday through Friday by contacting an ABB HR Representative at 1-888-694-7762.

Protected Veterans and Individuals with Disabilities may request a reasonable accommodation if you are unable or limited in your ability to use or access ABB's career site as a result of your disability. You may request reasonable accommodations by calling an ABB HR Representative at 1-888-694-7762 or by sending an email to US-AskHR@abb.com. Resumes and applications will not be accepted in this manner. 

Internships at ABB within the United States are not eligible for company-sponsored medical benefits, 401(k) contributions, or paid time off. 

The hourly rate is determined by things such as the successful applicant’s qualifications, graduation year and experience. This position is expected to pay between $20 - $34 per hour.

""")

print(result)
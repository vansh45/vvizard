from langchain_openai import OpenAIEmbeddings
from dotenv import load_dotenv
from sklearn.metrics.pairwise import cosine_similarity
import numpy as np
import os
load_dotenv()

if not os.getenv("OPENAI_API_KEY"):
    raise ValueError("OPENAI_API_KEY not found in environment variables")

embeddings = OpenAIEmbeddings(model="text-embedding-3-small", dimensions = 300)

def get_similarity(documents, query):
    document_embeddings = embeddings.embed_documents(documents)
    query_embedding = embeddings.embed_query(query)
    return cosine_similarity([query_embedding], document_embeddings)[0]

documents = [
    "Dogs are loyal and friendly pets",
    "Cats are independent and aloof",
    "Dogs are man's best friend",
    "Cats consider themselves as independent creatures",
    "Dogs are social animals and love to be around people",
    "Cats are solitary creatures and prefer to be alone",
    "Dogs are easy to train and learn quickly",
    "Cats are difficult to train and learn slowly",
]

query = "who are social animals? and learn quickly?"

similarities = get_similarity(documents, query)
print(sorted(list(enumerate(similarities)), key=lambda x: x[1], reverse=True))

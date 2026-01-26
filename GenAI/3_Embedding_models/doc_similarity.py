from langchain_openai import OpenAIEmbeddings
from dotenv import load_dotenv
from sklearn.metrics.pairwise import cosine_similarity
import numpy as np
import os
from pathlib import Path

# Compute the path to .env relative to this file
env_path = Path(__file__).resolve().parent.parent / ".env"
load_dotenv(dotenv_path=env_path)

# Check if the key is loaded
if not os.getenv("OPENAI_API_KEY"):
    raise ValueError("OPENAI_API_KEY not found in environment variables")

# Initialize embeddings
embeddings = OpenAIEmbeddings(model="text-embedding-3-small")

def get_similarity(documents, query):
    document_embeddings = embeddings.embed_documents(documents)
    query_embedding = embeddings.embed_query(query)
    return cosine_similarity([query_embedding], document_embeddings)[0]

documents = [
    "Dogs are loyal, friendly and social pets",
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

# Print documents ranked by similarity
for idx, score in sorted(enumerate(similarities), key=lambda x: x[1], reverse=True):
    print(f"Document {idx}: {documents[idx]} | Similarity: {score:.4f}")
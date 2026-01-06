import random
import string

for i in range(15):
    random_letter = random.choice(string.ascii_letters)
    print(f"hello{random_letter}")
# count vowels
vowels = ['a', 'e', 'i', 'o','u']

def count_vowels(str) :
    count =0
    for letters in str :
        for v in vowels:
            if letters == v:
                count = count+1
    return count    
str = input("enter the sentence or word : ")
print(count_vowels(str))
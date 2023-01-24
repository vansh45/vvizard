# list comprehensions


multiples = [x*9 for x in range (1,11,2) if x%5!=0]
print (multiples)



languages = ["c++", "python", "html","css","javascript"]
lengths =[len(lang) for lang in languages]
print(lengths)



z =[ y for y in range(0,22) if y%3==0]
print(z)

l =[lang.upper() for lang in languages]
print(l)
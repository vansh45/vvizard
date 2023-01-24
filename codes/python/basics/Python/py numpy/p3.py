import numpy as np

a = np.random.rand()  #betweem 0-1
print(a,"\n")

b=np.random.rand(3,3)
print(b,"\n")

c=np.random.rand(3,3)*100+100 #for between 100 and 200
print(c,"\n")

print(np.random.randint(5)) #between 0 and 5(exclusive)
print(np.random.randint(5,10,(4,3))) #between 5 and 10(exclusive) 
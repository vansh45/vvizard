import numpy as np

a= np.array([1,2,3])
b=a     
b[0]=100
print(a)  

# messed things up 

c= a.copy()
c[0] = 1010

print(a)
print(c)
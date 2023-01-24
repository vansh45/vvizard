# vector kinda representation
import numpy as np
u =[1,2]
v =[4,3]

z =[]
for n, m in zip(u,v):
    z.append(n+m)
print(z)

#using numpy arrays
a = np.array([1,2,5])
b = np.array([4,3,7])
c = a+b 
d = 3*a
e = 2+ a
print(c)
print(d)
print(e)
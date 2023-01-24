import numpy as np

a = np.arange(1,10,2)
print(a)


b = np.ones((3,3))
print(b,"\n")

b[1][2] =4
print(b)
print(b.any(1))
print(b.any(0))
print(b.all(b<3,axis=0))
#0 -> false  1-> true


z= np.arange(30)
z= z.reshape(5,6)
print(z)

print(z.mean())
print(z.mean(axis=0)) #column wise
print(z.var())
print(z.std())


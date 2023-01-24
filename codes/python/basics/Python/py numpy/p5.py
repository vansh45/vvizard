import numpy as np

a = np.ones((5,5))
b = np.zeros((3,3))
b[1,1]=9
a[1:4,1:4] = b # or a[1:-1,1:-1]
print(a)

# np.matmul(x,y)  for matrix multiplication

c=np.linalg.det(a)  #determinant
print(c)
d= np.sum(a,axis =0)
print(d)
print(d[d>5])


b.astype('int32') # for converting any data types
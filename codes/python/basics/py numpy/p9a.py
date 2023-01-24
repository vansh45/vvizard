# dot product
import numpy as np
u = np.array([2,5])
v = np.array([4,3])

z = np.dot(u,v)
print(z)


a = np.array([[1,2,3],[2,3,4]])
b = np.array([[2,3],[3,4],[4,5]])
c = np.dot(a,b)
print(c)

d = a.T  # transpose of matrix
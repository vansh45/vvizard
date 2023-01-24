import numpy as np

x = np.array([1,2,3])
y = np.array([1,2,3.2])
z = np.array([1,2,3.2,"hii"])


print(x)
print(type(x))
print(np.ndim(x)) #dimension
print(type(x[0]))
print(type(y[0]))
print(type(z[0]))
#priorities

l=[ 1,2,3,4,5]

m =np.array(l)

print(type(m))
print(type(l))

o = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(o.shape)
print(o[1,2])
print(o[1,:])
print(o[:,2])

p =np.array([[1,2,3,4,5,6,7,8],[9,10,11,12,13,14]])
print(p[0,1:6:2])   # we can assign too
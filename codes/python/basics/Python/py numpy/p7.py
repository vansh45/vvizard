import numpy as np


a = np.array([1,2,3,4])
f =np.array([5,6,7,8])

b =a+2
c= a*5
d =a**2
e = np.cos(a)
print(b,c,d,e)
print(a)

print( np.vstack([a,f,a,f]))
print( np.hstack([a,f]))
#horizontal and vertical stacking/arranging in array


# a ss to show indexing in pc
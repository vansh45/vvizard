import numpy as np


a = np.zeros((2,3))
print(a)

b = np.ones((4,2,2),dtype='int16')
print(b)

c = np.full((2,2),99)
print(c)

d =np.random.rand(4,2)
print(d)

e = np.random.randint(7,size=(3,3))
print(e)          #   ^range



x = np.random.choice([3, 5, 7, 9])
print(x)


x = np.random.choice([3, 5, 7, 9], p=[0.1, 0.3, 0.6, 0.0], size=(100))
print(x)  # p is probability
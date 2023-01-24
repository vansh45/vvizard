import numpy as np

arr = np.array([1, 2, 3, 4, 5, 4, 4])

x = np.where(arr == 4)

mean_ = arr.mean()
print(x)
print(mean_)

#others are 

# .max, .min,
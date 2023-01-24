import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np
import pandas as pd
import math as m

pi =m.pi
print(np.linspace(0,10,5))

x= np.linspace(0,2*pi,20)
y= np.sin(x)
print(y)

print(plt.plot(x,y))
import numpy as np
import pandas as pd


arr2d = np.arange(30).reshape(5,6)

#print(pd.DataFrame(arr2d),"\n")
f = pd.DataFrame(arr2d,columns=["a","b","c","d","e","f"],index=["u","v","w","x","y"])
print(f)
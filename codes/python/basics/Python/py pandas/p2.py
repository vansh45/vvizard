import numpy as np
import pandas as pd


arr2d = np.arange(30).reshape(5,6)

#print(pd.DataFrame(arr2d),"\n")
f = pd.DataFrame(arr2d,columns=["a","b","c","d","e","f"],index=["u","v","w","x","y"])
print(f)
print(f["c"]  +6) # / f.c

print(f.loc["x"]) # / f.iloc[0]

print(f.c.x) #/ f["c"]["x"]

f.drop("d",axis=1)  #1- column 0-row
f["n"]= [0,0,0,0,0]
f.loc["m"]=[6,7,6,7,6,7,6]
print(f)
f.sort_values(by="b")
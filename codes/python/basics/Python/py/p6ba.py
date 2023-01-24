a = ['apple',8,'red']
b=a 
b[0]= 'banana'  # but i only changed b  this is aliasing
print(a,b)


l= ['apple',8,'red']
m = l[:]       # this is cloning
m[0]= 'banana'
print(l,m)
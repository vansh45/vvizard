from ast import Del

from requests import delete


l = [5,6,7]
l.append([8,9])

print(l)
print('\n')


m= [5,6,7] ; k =[8,9]
m.append(k)
print(m)
print('\n')


n= [5,6,7]
n.extend(k)
print(n)


del(n[1:3])
print(n)
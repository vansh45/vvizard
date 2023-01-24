d =['3 bhk','2 rooms', '4 spaces','2 BHKs','3 Rooms']


d1 = [x.split(' ')[0] for x in d]
print(d1)

d2 = [y.replace(y[1:], ' bhk') for y in d]
print(d2)
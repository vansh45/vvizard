# lists 
values =[23, 52, 59, 37, 48]
sum =0
length =0
for value in values:
    sum+= value
    length+=1
    print(value , end = "-> ")
print("\ntotal sum: " +str(sum) +" average: " + str(sum/length))
for r in range (1,11,2):
    print(r)


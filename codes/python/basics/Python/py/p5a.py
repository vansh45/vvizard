# iterating in list is difficult so using enumerate function can do

l1 = ["eat", "sleep", "repeat"]
  
# printing the tuples in object directly
for ele in enumerate(l1):
    print (ele)
  
# changing index and printing separately
for count, ele in enumerate(l1, 100):
    print (count+1, ele)
  
# getting desired output from tuple
for count, ele in enumerate(l1):
    print(count)
    print(ele)
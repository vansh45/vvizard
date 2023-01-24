####
def found(key , list):
    for i in range(0,len(list)):
        if key == list[i]:
            return True
            break
        else :
            return 'not found '



u = int(input('enter no. of elements'))
lst=[]
print('enter list items')
for n in range(0,u):
    ele = int(input())
    lst.append(ele)
#print(found(3,lst))

for i in range(0,len(lst)):
        print(lst[i])
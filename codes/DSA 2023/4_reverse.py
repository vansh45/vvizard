def reverse(list):
    c=[]
    for l in reversed(list) :
        c.append(l)

    return c
# m = [1,2,3,4,5]
# print(reverse(m))
lst =[]
u = int(input('enter no. of elements'))

print('enter list items')
for n in range(0,u):
    ele = int(input())
    lst.append(ele)
print(reverse(lst))
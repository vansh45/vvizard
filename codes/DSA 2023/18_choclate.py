# https://www.geeksforgeeks.org/chocolate-distribution-problem/

def minimum_difference(l,n) :
    minn = 9999

    l.sort()
    #print(l)
    for i in range(len(l)-n+1):
        diff = l[n-1+i] -l[i]
        minn = min (minn,diff)
        #print(l[n-1+i], l[i])

    return minn
        

    

m =[7, 3, 2, 4, 9, 12, 56]
l =[3,4,1,9,56,7,9,12]
print(minimum_difference(m,3))
print(minimum_difference(l,5))
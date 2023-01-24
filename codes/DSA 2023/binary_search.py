l= [ 2,4,6,1,4,8,3,4]

def binary_search(list,key):
    list.sort()
    mid = int(len(list)/2)
    low = 0
    high = len(list)
    while (high >= low):
        if key == list[mid] :
            print("found")
            return list[mid]

        elif key < list[mid]:
            high = mid -1 
            mid = int((low + high)/2)

        elif key > list[mid]:
            low = mid +1
            mid = int((low + high)/2)

print(binary_search(l,8))
        


    
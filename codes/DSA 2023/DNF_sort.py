l= [1,0,2,1,0,0,1,2,2,1,2,0,1,2]


def DNF_sort(list):
    high = len(list)-1
    mid = 0
    low =0
    while (mid <= high):
        if list[mid] == 0 :
            list[low], list[mid] = list[mid] ,list[low]
            low += 1
            mid +=1

        elif list[mid] ==1:
            mid +=1

        elif list[mid] == 2:
            list[mid], list[high] =list[high],list[mid]
            
            high -=1

    return list


print(DNF_sort(l))
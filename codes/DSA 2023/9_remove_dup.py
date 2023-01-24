l = [2,3,4,1,5,3,1,4,4,4,6,7,3]

# def remove_duplicates(lst):
#     for i in range(len(lst)-1):
#         for j in range(i+1,len(lst)-1 ):
#             if lst[i] == lst[j]:
#                 lst.remove(lst[j])
#     return lst
# # bug => list ka size kam hota zaara but I fixed len(lst) so list would go out of index
# print(remove_duplicates(l))

# bugged
# def remove_duplicates(lst):
#     n = len(lst)
#     temp = list(range(n))
#     j=0
#     for i in range(0,n-1):
#         if lst[i] != lst[i+1]:
#             temp[j] = lst[i]
#             j +=1

#     temp[j] = lst[n-1]
#     j += 1

    
        
#     return temp
# print(remove_duplicates(l))

# l = list(set(l))
# print(l)
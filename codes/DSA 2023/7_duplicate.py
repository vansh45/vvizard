l = [2,4,3,2,5,3,6]
def find_duplicates(list):
    for i in range(len(list)-1):
        for j in range(i+1,len(list)-1):
            if list[i] == list[j]:
                print("found duplicate {0} , at position {1}".format(l[i],j))

def unique(list):
    return set(list)

find_duplicates(l)
print(list(unique(l)))

# time complexity = o(n2)
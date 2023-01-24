def palindrome(s):
    l1=[]
    for i in range(int(len(s)/2)):
        l1.append(s[i])

    l2 =[]
  

    for j in range(int(len(s)))[:int(len(s)/2 -1):-1]:
        l2.append(s[j])
    l3 =[]

    for ele in l1:
        if ele not in l2:
            l3.append(ele)
    print (l3)
    print(l2)
    print(l1)
    


def palindrome2(s):
    l1=[]
    for i in range(int(len(s)/2)):
        l1.append(s[i])

    l2 =[]
  

    for j in range(int(len(s)))[:int(len(s)/2 -2):-1]:
        l2.append(s[j])
    l3 =[]
     
    if len(l1) > len(l2):
        for ele in l2:
            if ele not in l1:
                l3.append(ele)

    if len(l2) > len(l1):
        for ele in l1:
            if ele not in l2:
                l3.append(ele)

    print (l1)
    print(l2)
    print(l3)
    # for letter in int(s[::-1]/2):
    #     l2.append(letter)
    # if l1 == l2:
    #     print(l1,l2)
    #     return True

print(palindrome2('raicecar'))
#print(palindrome('racecar'))
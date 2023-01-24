def reverse_string(strng):
    
    stck =[]
    s = strng.split(" ")
    for i in s:
        stck.append(i)
        s=''
    while len(stck) != 0:
        
        s = s +" "+ stck[len(stck)-1]
        
        stck.pop()
    return s

print(reverse_string('how you doin !'))
print(type(reverse_string('how you doin !')))
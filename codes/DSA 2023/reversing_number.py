def reverse_number(num):
    s = str(num)
    stck =[]
    for i in s:
        stck.append(int(i))
    num = 0
    while len(stck) != 0:
        num = num * 10 + stck[len(stck)-1]
        stck.pop()
    return num

print(reverse_number(23456))
print(type(reverse_number(23456)))
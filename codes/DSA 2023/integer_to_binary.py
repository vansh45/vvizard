def int_to_binary(num):
    b =[]
    c=""
    i=0
    while num >0:
        b.append(num%2)
        num = num//2
        i+=1
    b.reverse()
    for j in range(0,len(b)):
        c = c + str(b[j])
    print("return type is ",type(c))
    return c

print (int_to_binary(55))

# or

def decimalToBinary(n):
    return "{0:b}".format(int(n))

print(decimalToBinary(54))
# return-type integer
# a =55
# b=0
# while a>0:
#     b = b*10 + a%2
#     a = a//2
# got it but int we want is reverse of it and 0 in front is neglegted in current scenerio
# print(b)
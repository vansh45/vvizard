def decimal_to_Binary(n):
    return "{0:b}".format(int(n))

def binary_to_decimal(st):
    st_n = int(st)
    x =1
    binary =0
    while st_n >0:
        rem = st_n % 10
        binary += x*rem
        x*=2
        st_n//=10
    return binary

def add_two_binary(s1,s2):
    ss1 =binary_to_decimal(s1)
    ss2 =binary_to_decimal(s2)

    return decimal_to_Binary(ss1+ss2)

print(add_two_binary('11','1'))
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

print(binary_to_decimal('100100111000000'))
print(binary_to_decimal('1100'))
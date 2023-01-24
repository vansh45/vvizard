
def reverse( number ):
    rev = 0
    while number >0:
        last_digit = number %10
        rev = rev*10 + last_digit
        number = number // 10
    return rev

print(reverse(number = int(input('enter number'))))

    

# reverse a number
number = int(input("enter a positive no. : "))


def sum_of_digits(number):
    sum =0
    while (number != 0) :
    
        lastdigit = number%10
        sum = sum*10 + lastdigit
        number = number//10
    return sum
print(sum_of_digits(number))
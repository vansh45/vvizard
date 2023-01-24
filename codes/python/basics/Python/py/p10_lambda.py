# lambda function 
# for 
def square(n):
    return n**2

l =[1,2,3,4,5,6,7,8,9]
print(list(map(square,l)))
#-----------------------------------------#

print(list(map(lambda n:n**2,l)))


addition = lambda n1, n2: n1+n2 
print(addition(4,5))


even = lambda n: n%2 ==0
print(even(10))
print(list(map(even,l)))

print(list(filter(lambda n: n%2!=0 ,l)))


print(list(map(square,filter(lambda n1: n1%2!=0 ,l))))
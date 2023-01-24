# importing ext modules

import math                                          # import math as m   then use m.func()
print( "the type of math is " ,type(math))

# print(dir(math)) # names of functions in class module 'math'
print("pi to 4 significant digits = {:.4}".format(math.pi))

l= math.log(32, 2)
print(l)

print("log for 10 is {:.5}".format(math.log(10)))  # others -> log10() log2()

c=math.cos(math.pi/6)
print(c)

d = math.degrees(math.pi/2)  # radians()
print(d)

print(math.factorial(5))
print(math.pow(3,2))
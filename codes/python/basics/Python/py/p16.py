class Circle(object):
    def __init__(self,radius,color) :  # init is constructor
        self.radius = radius
        self.color = color

class Rectangle(object):
    def __init__(self,height,width,color) :  # init is constructor
        self.height = height
        self.width = width
        self.color = color


c1 = Circle(10,'red')
r1 = Rectangle(5,4,'Blue')


print(c1.radius)
print(r1.color)
print(c1.color)
c1.color ='Maroon'
print(c1.color)
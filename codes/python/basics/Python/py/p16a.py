class Rectangle(object):
    def __init__(self,height,color,width=4) :  # init is constructor
                   # default parameter ^
        self.height = height
        self.width = width
        self.color = color
    def add_height(self,h) :       #defining a method
        self.height= self.height + h
        return self.height

r1 = Rectangle(5,4,'Blue')
r1.add_height(5)
print(r1.height)
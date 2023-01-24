class Node:
    def __init__(self,value):
        self.value = value
        self.next = None

class LinkedList:

    def __init__(self):
        self.head = None

    def insert_at_the_beg(self,val):
        node = Node(val)
        if self.head is None:
            self.head = node
        else:
            node.next = self.head
            self.head = node
            
    def display(self):
        n = self.head 
        while n != None:
            print(n.value,end = "->")
            n = n.next
        print("None")

            

    def insert_at_end(self,val):
        node = Node(val)
        if self.head == None:
            self.head = node
        else: 
            n = self.head
            while n.next != None:
                n = n.next

            n.next = node
        

    def delete_at_the_beg(self):
        n = self.head
        if self == None:
            return -1
        else :
            self.head = n.next
            del n

    
    def delete_at_the_end(self):
        n  = self.head

        if self == None:
            return -1
        else:
            p = self.head
            while p.next.next  :
                p = p.next 
            del p.next
            p.next = None

    def delete_by_value(self,v):
        n = self.head
        if self == None:
            return 
        elif v == n.value:
            self.head = n.next
            del n 
            return 
        while n.next:
            if n.next.value == v :
               
                dval = Node(n.next)
                n.next = n.next.next
                del dval
                n = n.next
            else:
                 n = n.next
        
            
    def count_nodes(self):
      count =1 
      n = self.head
      while n != None:
         n = n.next
         count+=1
      return count

    
    def delete_by_position(self, pos):
         n = self.head
         count =1 
         n = self.head
         while n != None:
            n = n.next
            count+=1
         
         n = self.head
         if self == None or pos == 0 or abs(pos) >= count:
            return 
         elif pos == 1:
            self.head = n.next
            del n
            return
         elif pos < 0:
            pos = count + pos
         p = 1
         while n!= None and p+1 != pos:
            n = n.next
            p+=1

         dval = Node(n.next)
         n.next = n.next.next
         del dval
         return


         
        
new = LinkedList()
ll = [5,6,4,6,3,6,2,1,6]
ll2 =[7,8,9,10]
for i in ll:
    new.insert_at_the_beg(i)

for i in ll2:
    new.insert_at_end(i)

new.display()

print("-------------------------------------------------")
new.delete_at_the_beg()
new.delete_at_the_end()
new.display()


print("-------------------------------------------------")
new.delete_by_position(-3)
new.delete_by_value(6)
new.display()
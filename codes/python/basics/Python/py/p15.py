# exception handeling

try:
    print(1/0)
except:
    print ("this one")



l =[ 2, 3, 5, 6, 0, 5, 7, 0, 2, 0]
l2=[]
for i in l :
    try:
         l2.append("{:.2f}".format(10/i))
    except:
        l2.append("undefined")
   # finally:
    #    print("this will always run")
print(l2)


while True:
    try:
        x= int(input("enter an integer  "))
        break
    except:
        print("i saidddd enterrr a fuckingg INTEGER  !!!!!")
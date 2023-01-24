i1 = int(input("Enter 1st integer :"))
i2 = int(input("Enter 2nd integer :"))
i3 = int(input("Enter 3rd integer :"))

if i1>i2 and i1>i3 :
    print("{} is largest".format(i1))
elif i2>i3 and i2>i1:
    print("{} is largest".format(i2))
else :
    print("{} is largest".format(i3))

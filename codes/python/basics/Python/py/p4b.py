l = ["a1" ,"a2" , "a3", "a4"]
l1 =["hey", "buddy"]

print(l.index("a4"))
l.append("a5")
l.insert(2, "a2a")
print(l)

l.remove("a3")
l[3] ="a2b"
print(l)

l.extend(l1)
print(l)

l3=l1.copy()
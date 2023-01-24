# dictonary
my_dict = {1: "world" , "k2": "hello", "k3":[3,2,1]}
print(my_dict["k2"])
#print(my_dict("k2"))
print(my_dict[1])
print(my_dict["k3"])
print(my_dict["k3"][1])

print(my_dict.fromkeys([""]))

cool_beasts = {"octopuses":"tentacles", "dolphins":"fins", "rhinos":"horns"}
for item ,value in cool_beasts.items():
    print("{} have {}".format(item,value))
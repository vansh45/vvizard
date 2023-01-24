wardrobe = {"shirt":["red","blue","white"], "jeans":["blue","black"]}
for x ,y in wardrobe.items():
	for z in y :
		print("{} {}".format(z,x))
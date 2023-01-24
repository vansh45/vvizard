file_counts ={"jpg":10, "txt":14,"csv":2,"py":24}
for x in file_counts:
    print(x, end=" ")
print("\n")

# .keys() .items() .values()
for x,y in file_counts.items():
    #print(x,y, end=" ")

    print("there are {} files with the .{} extension".format(y,x))

print(file_counts.keys(),file_counts.values())


   
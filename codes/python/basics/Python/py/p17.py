# file1 = open("C:\\vsc\python\sample\sample2.txt","r")
# print(file1.name)


#better 

with open("C:\\vsc\python\sample\sample2.txt","r") as file2 :
    f = file2.read()
    print(f)
print(file2.closed)  #bool
print(f)
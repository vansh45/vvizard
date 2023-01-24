with open("C:\\vsc\Python\py\sample\sample2.txt","w") as file :
    file.write("this is line a\n")
    file.write("this is line b\n")
    print(file)
with open("C:\\vsc\Python\py\sample\sample2.txt","r") as file_r :
    f = file_r.read()
    print(f)

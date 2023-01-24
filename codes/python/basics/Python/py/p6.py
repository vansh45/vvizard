# strings



a = 12
print(type(a))

print("hello\nworld\t!!")

a = "there are 26 alphabets"
print("1 " +str(len(a)))
print("2 " +a[2])
print("3 " +a[6:12])
print("4 " +a[:])
print("5 " +a[-12:-3])
print("6 " +a[::-1])


print([word[0] for word in a.split() if isinstance(word[0],int)==False])   #debug it
# first and last character same
def first_and_last(message):
    if len(message) == 0  or  message[0] == message[-1]  :
        return True

    return False

print(first_and_last("else"))
print(first_and_last("tree"))
print(first_and_last(""))

s ='freez'
print(s[0],s[-1])
print(len(s))
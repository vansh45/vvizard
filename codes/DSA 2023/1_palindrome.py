def palindrome(s):
    for i in range(int(len(s)/2)):
        #print(s[-i-1])
        if s[i] !=s[-i-1] :
            return False
        
    return True

print(palindrome('racecar'))
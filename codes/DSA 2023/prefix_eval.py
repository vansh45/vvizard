def prefix_eval(s):
    stck =[]

    for i in reversed(range(0,len(s))):
        if s[i] ==' ':
            continue

        elif s[i] >='0' and s[i] <= '9':
            stck.append(int(s[i]))

        else:
            op1 = stck[len(stck)-1]
            stck.pop()
            op2 = stck[len(stck)-1]
            stck.pop()

            if s[i] =='+':
                stck.append(op1+op2)
                
            if s[i] =='-':
                stck.append(op1-op2)

            if s[i] =='*':
                stck.append(op1*op2)

            if s[i] =='/':
                stck.append(op1/op2)

            if s[i] =='^':
                stck.append(op1**op2)
    
    return stck[len(stck)-1]

print(prefix_eval("* + 2 3 + 4 5"))

                
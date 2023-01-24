def postfix_eval(s):
    stck =[]
    for i in range(len(s)):
        
        if(s[i] == ' '):
            continue

        elif(s[i] >='0'and s[i]<='9'):
            j=i 
            num=0

            while(i>=0 and s[i]>='0' and s[i]<='9'):
                i+=1
            i-=1
            for k in range(j,i+1):
                num = num*10 + int(s[k])
            stck.append(num)


        else:
            op1 = stck[len(stck)-1]
            stck.pop()

            op2 = stck[len(stck)-1]
            stck.pop()

            if s[i] == '+':
                stck.append(op1+op2)
            elif s[i] == '-':
                stck.append(op1-op2)
            elif s[i] == '*':
                stck.append(op1*op2)
            elif s[i] == '/':
                stck.append(op1/op2)
            elif s[i] == '^':
                stck.append(op1**op2)

    return stck[len(stck)-1]


print(postfix_eval(" 2 3 + 42 5 + * "))
            
def precedence(c):
    if c == '^' or c == '$':
        return 3
    
    elif c == '*' or c == '/':
        return 2

    elif c == '+' or c == '-':
        return 1

    else :
        return -1
    
def infix_to_postfix(s):
    arr =[]
    stck =[]

    for i in range(len(s)):
        if ( s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <='Z'):
            arr.append(s[i])
        
        elif(s[i] == '(' ):
            stck.append('(')

        elif(s[i] == ')' ):
            while (len(stck) != 0) and (stck[len(stck)-1] != '('):
                arr.append(stck[len(stck)-1])
                stck.pop()
            if len(stck) != 0 :
                stck.pop() # popping the (

        else :
            while len(stck) !=0 and precedence(s[i]) <= precedence(stck[len(stck)-1]):
                arr.append(stck[len(stck)-1])
                stck.pop()
            stck.append(s[i])

    while len(stck)!=0:
        arr.append(stck[len(stck)-1])
        stck.pop()

    for i in arr:
        print(i, end ="")

infix_to_postfix('(a-b/c)*(a/k-l)')
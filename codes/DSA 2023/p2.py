def paranthesis(s):
    l= []
    for i in s :
        if i == '[' or  i == '{' or i == '(':
            l.append(i)

        elif i == ']':
            if l[-1] == '[' or len(l)==0:
                l.pop()

        elif i == '}':
            if l[-1] == '{':
                l.pop()

        elif i == ')':
            if l[-1] == '(':
                l.pop()

        else : return False
    if len(l) >0 :
        return False
    else :
        return True
            

lst =['()']

l1 ="()"
l2 ='(){}[]'
l3 ='(]'
l4 =']'
print(paranthesis(l4))



    
            
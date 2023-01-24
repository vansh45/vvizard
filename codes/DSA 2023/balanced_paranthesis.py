#stack using list

def balanced_paranthesis(s): 
    stack =[]
    
    for i in s:

        if i == '(' or i =='{' or i == '[':
            stack.append(i)

        elif i == ')' :
            if len(stack) != 0 and stack[len(stack)-1] == '(':
                stack.pop()
            else : return False
            
        elif i == '}' :
            if len(stack) != 0 and stack[len(stack)-1] == '{':
                stack.pop()
            else : return False

        elif i == ']' :
            if len(stack) != 0 and stack[len(stack)-1] == '[':
                stack.pop()
            else : return False

    if len(stack) == 0:
        return True

print(balanced_paranthesis('[4*{3-(2+(5-1))}*(4-5)]'))

            
        

"""
def integer_to_roman(intgr):
    
    st =""

    M = num % 1000
    if M < num:
        x_ = int(num / 1000)
        st = st+'M'*x_
        print("remainder =" ,M)

    D = M % 500
    if D < M:
        st = st+'D'
        print("remainder =" ,D)
    
    C = D % 100
    if C < D:
        x_ = int(D / 100)
        st = st+'C'*x_
        print("remainder =" ,C)

    print("C =" ,C)
    L = C % 50
    if L < C:
        if L >= 90 and L <100:
            st = st+'XC'
            #L = L-90
        else:
            st = st+'L'
        

    # 89 - 40
    print("L = ", L)
    X = L % 10
    if X < L:
        if L >= 40 and L < 50:
            st = st +'XL'
            #X = X - 40
        else:
            x_ = int(L / 10)
            st = st+'X'*x_
        print("remainder x=" ,X)
        
    # 39 - 5
    print ("X = " ,X)
    V = X % 5
    if V < X:
        if X == 9:
            st = st +'IX'
            V = V - 9
        else :
            st = st+'V'
        print("remainder v=" ,V)
    # 4 321
    if V == 4:
        st = st+'IV'
    else :
        I = V 
        st = st+'I'*V


    print(st)
#integer_to_roman(99)

"""

def int_to_roman(num):
    str=""
    intgr =   [ 1 , 4  , 5 , 9  , 10, 40 ,50 ,90 ,100 ,400 ,500, 900,1000]
    symbl = ["I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"]
    i = 12

    while num:
        div = num // intgr[i]
        num %= intgr[i]

        while div: 
            str+=symbl[i]
            div -= 1
        i -= 1
    return str

print(int_to_roman(696))





def intToRoman( num):
        M = ["","M","MM","MMM"]
        C = ["","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"]
        X = ["","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"]
        I = ["","I","II","III","IV","V","VI","VII","VIII","IX"]
        return M[num//1000]+C[(num//100)%10]+X[(num//10)%10]+I[num%10]

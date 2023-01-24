#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefix_eval(string s){
stack <int> st;
for(int i=s.length()-1; i>=0; i--){
    
    if (s[i] == ' ')
            continue;
    if(s[i]>='0' && s[i]<='9'){

        int j =i , num =0;

        while(i<s.length() && s[i]>='0' && s[i]<='9'){
            i--;
        }  i++;
        for(int k =i; k<=j; k++){
            num = num*10 + int(s[k]-'0');
        }
        st.push(num);
    }



    else{
        int op1 = st.top();
        st.pop();
        int op2 = st.top();
        st.pop();

        switch (s[i]){
        case '+':
        st.push(op1+op2);
        break;
        case '-':
        st.push(op1-op2);
         break;
        case '*':
        st.push(op1*op2);
         break;
        case '/':
        st.push(op1/op2);
         break;
        case '^':
        st.push( pow(op1,op2));
         break;
        default:
                break;
        
        }

    }
    
}
return st.top();
}

int main(){
    string s = "* + 2 3 + 4 5";
    // 
    cout<<prefix_eval(s);
     return 0;
     cout<<isdigit(9);
}
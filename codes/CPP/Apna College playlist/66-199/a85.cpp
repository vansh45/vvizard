// prefix evln
#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){
    stack<int> st;
    for(int i=s.length()-1; i>=0;i--){
        if(s[i]>='0' && s[i]<= '9')
        // for 1 digit values only
        {
            st.push(s[i]-'0');
            // to convert string into ascii/ in case
            // of numerical its exact number
        }
        else{ 
            int op1= st.top();
            st.pop();
            int op2= st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
            st.push(op1 + op2);
                break;
            case '-':
            st.push(op1 - op2);
                break;
            case '*':
            st.push(op1 * op2);
                break;
            case '/':
            st.push(op1 / op2);
                break;
            case '^':
            st.push(pow(op1, op2));
                break;
            
            default:
                break;
            }
        }
    }
    return st.top();
}
int main(){
    cout<<prefixEvaluation("-+7*45+20")<<endl;
     return 0;
}
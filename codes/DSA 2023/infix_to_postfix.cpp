#include <iostream>
#include <stack>
using namespace std;

int precedence(char c){
    if( c=='^' || c== '$')
        return 3;
    else if( c=='*' || c== '/')
        return 2;
    else if( c=='+' || c== '-')
        return 1;
    else  
        return -1;
}
void infix_to_postfix(string s){
    stack <char> st;
    for(int i=0; i<s.length();i++){
         
        if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z') ){
         cout<<s[i];
        } 
        else if(s[i] =='(')
         st.push('(');

        
        else if(s[i] ==')'){
            while(!st.empty()&&st.top()!= '('){
                cout<<st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else {
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())){
                cout<<st.top();
                st.pop();
            }
            st.push(s[i]);

        }
        

    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
   infix_to_postfix("(a-b/c)*(a/k-l)");
 
     return 0;
}
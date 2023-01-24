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
void infix_to_prefix(string s){
    stack <char> st;
    string l;
    for(int i=s.length()-1;i>=0;i--){
         
        if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z') ){ 
         l+=s[i];
        } 
        else if(s[i] ==')')
         st.push(')');

        
        else if(s[i] =='('){
            while(!st.empty()&&st.top()!= ')'){
                l+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else {
            while(!st.empty() && precedence(s[i]) <= precedence(st.top())){
                l+=st.top();
                st.pop();
            }
            st.push(s[i]);

        }
        

    }
    while(!st.empty()){
        l+=st.top();
        st.pop();
    }
    for(int i=l.length()-1; i>=0;i--)
    cout<<l[i];
}
int main(){
   infix_to_prefix("(a-b/c)*(a/k-l)");
 
     return 0;
}
#include <iostream>
#include <stack>
using namespace std;

bool balanced_paranthesis(string s){
    stack <char> st;
    for(int i=0; i<s.length();i++){

        if(s[i]=='(')
        st.push(s[i]);

        else if(s[i]=='{')
        st.push(s[i]);

        else if(s[i]=='[')
        st.push(s[i]);

        else if(s[i]==')' ){
            if(!st.empty() && st.top()=='(')
            st.pop(); 
            else { return false;}
        }
        else if(s[i]=='}' ){
            if(!st.empty() && st.top()=='{')
            st.pop(); 
            else { return false;}
        }
        else if(s[i]==']' ){
            if(!st.empty() && st.top()=='[')
            st.pop(); 
            else { return false;}
        }
    }
    if(st.empty())
    return true;
}
int main(){
    string str = "[4*{3-(2+5-1)}*(4-5)]";
    if(balanced_paranthesis(str)){
        cout<<"balanced_paranthesis"<<endl;
    }
    else {cout<<"not balanced_paranthesis";}
     return 0;
}
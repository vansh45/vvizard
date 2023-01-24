#include <iostream>
#include <stack>
using namespace std;

void reverse_string(string s){
    stack<string> st;
    
    for(int i=0; i<s.length(); i++){
        string word ="";
         while(i<s.length() && s[i]!= ' '){
            word = word + s[i];
            i++;
         }
         st.push(word);
    }
    for(int i =0; i<s.length(); i++){
        cout<<st.top()<<" ";
        st.pop();
    }

}
int main(){
    string s =" how you doin' ";
    reverse_string(s);
     return 0;
}
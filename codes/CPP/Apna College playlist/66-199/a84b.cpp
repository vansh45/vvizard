// reverse a word 
#include <iostream>
#include<stack>
using namespace std;

void reverse_a_word(string s){
    stack<string> t;
    string letter ;
    for(int i=0;  i<s.length(); i++){
        
     letter = s[i];
      t.push(letter);
    }
 while(!t.empty()){
     cout<<t.top();
     t.pop(); 
 }cout<<endl;
    
}
int main(){
    string s ="abc defghi";
    reverse_a_word(s);
     return 0;
}
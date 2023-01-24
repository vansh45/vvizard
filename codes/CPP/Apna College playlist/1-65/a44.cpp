// reversing a word using reccursion v40

#include <iostream>
using namespace std;
void reverse(string s){

    if(s.length()==0){
        return;
    }
    string ros = s.substr(1); // func which call after() part of string
   
    reverse(ros);
    cout<<s[0];

}

int main(){
    string d= "abcdef";
    reverse(d);
    return 0;
}
#include <iostream>
using namespace std;

void check_palindrome(string s){
   bool f = false;
   for(int i=0; i<s.size();i++){
    if(s[i]==s[s.size()-1-i]){
        f = true;
    }
    else { f= false;}
   }
   if(f == true){
    cout<<" the word is palindrome ";
   }
   else{ cout<<" not a palindrome";}
}

int main(){
    string s;
    cout<<" enter the string ";
    cin>>s;
    cout<<" string is "<<s<<endl;
    check_palindrome(s);
     return 0;
}
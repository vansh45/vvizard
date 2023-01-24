#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void check_anagram(string &s,string &t){
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
    
    if(s==t){
        cout<<"anagram";
    }
    else{
        cout<<"not an anagram";
    }
}
int main(){
    string s,t;
    cout<<" enter 1st string ";
    cin>>s;
    cout<<" enter 2nd string ";
    cin>>t;
    cout<<endl;
    check_anagram(s,t);
     return 0;
}
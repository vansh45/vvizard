// -- substrings -- v40 - 24:00 //
#include <iostream>
using namespace std;

void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros =s.substr(1); // ros-> rest of string 

    subseq(ros,ans);
    subseq(ros,ans+ch);
}
int main(){
    subseq("ABC","");
    cout <<endl;
    return 0;
}
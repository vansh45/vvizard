// --- print all possible words from phone digits ---///
#include <iostream>
using namespace std;

string keypadarr[] = {"","", "abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"};
                   // 0  1     2      3      4     5     6      7     8      9    
void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadarr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0; i<code.length();i++ ){
        keypad(ros, ans +code[i]);
}
}
int main(){
    keypad("26","");
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    
    int num =' ';
    cout<< " the white space code is as follows "<<num<<endl;

    char ch;
    string s = "\n please enter a character followed by "
    " <return>:";

    cout<<s<<endl;
    cin>> ch;
    num = ch;
    cout<< " the character "<<ch<< "  has code "<< num<<endl;
    return 0;
}
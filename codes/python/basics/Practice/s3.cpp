#include <iostream>
#include<string>
using namespace std;

int main(){
    string s ( "what is your name :   "),
    name,                                  //s2
    line (40, '-'),                        //s3
    total = "hello ";                       //s4
    
    cout<< s;
    getline(cin, name);

    total = total + name;

    cout << line<<endl<<total<<endl;
    cout<< " your name is "<<name.length()<<endl;
    
    return 0;
}
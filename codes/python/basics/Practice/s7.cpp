#include <iostream>
#include<string>
#include<iomanip> // for manipulators
using namespace std;

int main(){
    string s(" spring flowers ");
    cout<<left<<setfill('?')<<setw(30)<<s<<endl;
    string d ="how you doing ?";
    cout <<d.substr(4,3);
    return 0;
}
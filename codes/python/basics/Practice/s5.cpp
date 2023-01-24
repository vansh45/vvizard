#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"please enter a number.";
    cin>> number;
    cout<< uppercase<<" octal \t decimal \t hexadecimal\n"
    << oct<<number<<"\t" <<dec<<number<<"\t"<<hex<<number
    <<endl;

    cout<<hex<<11<<endl;

    cout.precision(3);
    cout<< 12.345<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int num1 = 100;
    int num2 = 8;
    double average ;
    average = num1/num2;
    cout<<average<<endl;
    average = static_cast<double> (num1)/num2;
    
    cout<<average;
     return 0;
}
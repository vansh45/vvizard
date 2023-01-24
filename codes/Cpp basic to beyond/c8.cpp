#include <iostream>
using namespace std;

int main(){
    bool equal_result(false);
    bool not_equal_result(false);
    int num1, num2;
    cout<<" enter 2 numbers";
    cin>>num1>>num2;
    equal_result = (num1==num2);
    not_equal_result = (num1!=num2);
    cout<<"comparision results (equals) :"<<equal_result<<endl;
    cout<<"comparision results (not equals) :"<<not_equal_result<<endl;
     return 0;
}
// if else in short
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double marks;
    cout<<"enter marks  ";
    cin>>marks;
    cout<<fixed<<setprecision(2)<<marks;
    marks>=33 ? cout<< "  you are passed " : cout<<"failed";
    return 0;
}
//q3 b
#include <iostream>
using namespace std;

double fx(int x ){
    double value =  ((x*x)+1.5*x+5)/(x-3);
    return value;
}
int main(){
    for (int i=-10 ; i<=10 ; i=i+2){
        cout<<fx(i)<<endl;
    } 
     return 0;
}

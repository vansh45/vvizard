// q2
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<< "enter no. whose table is to be printed  ";
    cin>>a;
    int m=0;
    for (int i=1; i<=10 ; i++){
        m=a*i;
        cout<<a <<" * "<<i<<" = "<<m<<endl;
    }
     return 0;
} 
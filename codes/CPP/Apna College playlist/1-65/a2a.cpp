// sum of n natural numbers between a and b
#include <iostream>
using namespace std;

int main(){

     int sum=0 ,a,b  ;
     cin>>a>>b;
    for(int j=a; j<=b; j++){
     
         sum = sum + j;
        
     }
      cout<<sum;
    return 0;
}
// a number is prime or not
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a ";
    cin>>a;
        int i= 2;
        for( i; i<a; i++){
            if(a%i == 0){
                break;
            }
        } 
        if (a==i){cout<<"prime";}
        else{cout<<"non-prime";}
    
     return 0;
}

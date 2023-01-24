
#include <iostream>
#include <math.h>
using namespace std;


// 1---- reversing a number ---- 13v
/*

int main(){
    
    int n; 
    cin>>n; 

    int reverse = 0; 
    while(n>0){

       
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<reverse;
    return 0; 
} */

// ---- armstrong no. ----
// a number whose individual digit when cubed and added 
//gives the same no. ex 153 
 int main(){
    
    int n , originaln ,lastdigit =0; 
    cin>>n; 

    int sum = 0; 
     originaln = n;
    while(n!=0){

        
         lastdigit = n%10;
       sum+= lastdigit*lastdigit*lastdigit;
       n=n/10;
    }
    
     if (sum == originaln){ cout<<originaln<<"   it is an arm strong no.";}
     else { cout<<originaln<< "   no";}
    return 0;}
 
   
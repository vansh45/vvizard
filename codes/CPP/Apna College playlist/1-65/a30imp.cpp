// ---- swap by pointers ----
/*
#include <iostream>
using namespace std;

void swap(int a, int b){
        int temp =a;
        a=b;
        b=temp;}

int main(){
    
    int a=2;
    int b=4;

    swap(a,b);
    cout<<a<<" "<<b<<endl;   
  
   // will not swap

  return 0;}
*/

#include <iostream>
using namespace std;

void swap(int *a, int *b){
        int temp =*a;
        *a=*b;
        *b=temp;}

int main(){
    
    int a=2;
    int b=4;

  /*    int *aptr=&a;
    int*bptr= &b;

    swap(aptr,bptr);   //can bethis too */

swap(&a,&b);

    cout<<a<<" "<<b<<endl;   
  
   // will  swap

  return 0;}
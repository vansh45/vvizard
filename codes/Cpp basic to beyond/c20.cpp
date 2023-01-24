#include <iostream>
using namespace std;

int main(){
    int scores[] {3,4,5,6,7,-1};
    
    int *ptr{scores};
    cout<<*(ptr+2);
     cout<<endl;
     
while(*ptr !=-1){
    cout<<*ptr;
   * ptr++;}
   
     return 0;
}
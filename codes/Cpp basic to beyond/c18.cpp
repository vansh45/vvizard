#include <iostream>
using namespace std;

int main(){
    int *ptr {nullptr};
    ptr =new int;
   *ptr =100;
    cout<<ptr<<" "<<*ptr<<endl;
 delete ptr;
 
     return 0;
}
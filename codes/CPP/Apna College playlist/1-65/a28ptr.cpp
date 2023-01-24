#include <iostream>
using namespace std;

int main(){
 int a = 32;
 int *p ;
 p =&a;
 int *r = &a;

 cout<<r<<endl;
 cout<<p<<endl;
 cout<<&a<<endl;
 // will give address of a
 cout<<*p<<endl<<*r <<endl;
// *ptr will give 32 derefrencing .

int**q=&p;
cout<<*q<<endl;
// address of a
cout<<**q<<endl;
// will give 32

    return 0;
}

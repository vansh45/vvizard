// encapsulation 
#include <iostream>
using namespace std;

class A{
public:
 int a;
 void funcA(){
     cout<<"func a\n";
 }
 private:
void funcB(){
     cout<<"func b\n";
 }
 protected:
void funcC(){
     cout<<"func c\n";
 }
};
int main(){
    A obj;
    obj.a =2;
    obj.funcA();
     return 0;
}
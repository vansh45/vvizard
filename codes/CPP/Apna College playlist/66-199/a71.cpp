// polymorphism  -1 funcn overloading 
#include <iostream>
using namespace std;

class poly {
public : 
void func(){
    cout<<"i am a functionwith no ARGUMENTS"<<endl;
}
void func(int x){
  cout<<"i am a function with int argument"<<endl;
}
void func(double x){
  cout<<"i am a function with double argument"<<endl;
}
};
int main(){
    poly object;
    object.func();
    object.func(6.2);
    object.func(4);
    
     return 0;
}
// polymorphism  -1 funcn overloading 
#include <iostream>
using namespace std;

class poly {
public : 
void func(int n){
     int sum=0   ;
     for( int i= 0; i<= n ; i++){
         sum = sum + i;
     }
      cout<<sum<<endl;
    
}

void func(){
  cout<<"i am a function with int argument"<<endl;
}
void func(double x){
  double y= x*x;
  cout<<y<<endl;
}
};
int main(){
    poly object;
    object.func();
    object.func(6.2);
    object.func(4);
    
     return 0;
}
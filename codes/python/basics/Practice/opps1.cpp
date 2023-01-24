#include <iostream>
using namespace std;

class complex{
    private:
  int real , imag;
    public:
  
  complex(int r=0, int i=0){
    real =r; imag = i;
  }
  
  complex operator +(complex &obj){
    complex res ;
    res.imag = imag + obj.imag;
    res.real = real + obj.real;
    return res;
  }
  void display(){
    cout<<real<<" + i"<<imag;
  }

};
int main(){
    complex a1 (3,5);
    complex a2 (5,3);
    complex a3 = a1 + a2;
    a3.display();
     return 0;
}
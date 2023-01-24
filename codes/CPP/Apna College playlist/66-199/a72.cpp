// 2. operator overloading  v56
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class complex{
    private:
    int real , imag;
    public:
       complex(int r, int i){ // constructor
          real = r;
          imag = i;
       }
      // operator overload 
complex operator + (complex const &obj){


complex res;
res.imag = imag + obj.imag;
res.real = real + obj.real;
return res;
      }
   void display(){
       cout << real<< " +i"<<imag<<endl;
   }
};
int main(){
    complex c1(12,7), c2(6,7);
    complex c3 = c1+ c2;
    c3.display();
    return 0;
     
} // operator overloading chalnahi rahi
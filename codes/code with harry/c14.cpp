#include <iostream>
using namespace std;

 class complex{
int a ,b; // a is real part and b is imaginary part

public :
void setdata( int v1, int v2){
    a=v1;
    b=v2;
}
void setdatabysum( complex n1 , complex n2){
  a= n1.a + n2.a;
  b= n1.b + n2.b;

}

void printnumber(){

    cout<<"your complex number is " <<a<< "+" <<b<<"i"<<endl;
}
 };
int main(){
    complex c1, c2, c3;
    c1.setdata( 3, 5 );
    c1.printnumber();
      c2.setdata( 4, 7 );
    c2.printnumber();
    c3.setdatabysum( c1 , c2);
    c3.printnumber();
    return 0;
}
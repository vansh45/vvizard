#include <iostream>
using namespace std;


//--- sum of two complex numbers  m2  ---


 class complex{
int a  , b ; // a is real part and b is imaginary part

public :
void setdata( int n1, int n2){
    a=n1;
    b=n2;
}
friend complex add(complex n1 ,complex n2);
void printnumber(){

    cout<<"your complex number is " <<a<< "+" <<b<<"i"<<endl;
}
 };

 complex add( complex o1, complex o2 ){
     complex o3;
o3.setdata((o1.a + o2.a) , (o1.b +o2.b));
return o3;
 }
int main(){
    complex c1, c2, c3;
    c1.setdata( 3, 5 );
    c1.printnumber();
      c2.setdata( 4, 7 );
    c2.printnumber();
    c3 = add(c1, c2);
    c3.printnumber();
    return 0;
}
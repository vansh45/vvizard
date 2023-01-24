#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,d,e,f,g,h;

   a =  sqrt(4);
   b= sqrt(12.25);
   c= sqrt(0.0121);
   d= round(4.7);
   e = round(4.1);
   f= round(4.5); // round off
   g = ceil(3.2); // round up
   h = floor(3.8); // round down
   cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl;

   cout<< showpos<<123<<endl; // will show int with sign
   cout<<45;
    return 0;
}
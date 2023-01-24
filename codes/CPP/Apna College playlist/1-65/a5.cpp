// --- a no. divisible by 2 or 3 ? ---



#include <iostream>
using namespace std;
int a =2  ,b = 3;
int c;
int main(){
       cout <<" enter the value"<<endl;
     cin>>c;
   
if( c%a== 0 || c%b== 0)
{ cout<<" it is divisible"; }
else{ 
   cout <<" not divisible";
}

    return 0;
}
// ap from 3 random nos.
#include <iostream>
using namespace std;

int ap( int a, int b, int c){
   
   
if((b-a) == (c-b)){
    cout<<a<<" "<<b<<" "<<c<<" ";
    return a,b,c;}

    else{
        int mod;
        mod= abs((a+c)/2 -b);
       
         int x =a- 2*mod ;
         int y =b;
         int z =c;
        
          cout<<x<<" "<<y<<" "<<z<<" ";
        return x,y,z;
    }

}
int main(){
    int n1, n2 , n3;

    cin>>n1>>n2>>n3;
    ap(n1,n2,n3);
    

    return 0;
}
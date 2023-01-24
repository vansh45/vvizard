#include <iostream>
using namespace std;


int fact( int j ){
    int factorial=1;
 for ( int i=2; i<=j; i++){
     factorial = factorial*i;
     
 
 }
  

      return factorial;

  
}
int main(){

    
    int n ,r;

    cout<<" enter n"<<endl;
cin>>n;
cout<<" enter r"<<endl;
cin>>r;
           int ncr = fact(n)/(fact(n-r)*fact(r));


   

cout<< " the ncr of "<<n<<"and"<<r<< "  is  "<<ncr;
    return 0;
}
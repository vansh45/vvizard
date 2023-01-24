// maximum
#include <iostream>
#include <climits>
using namespace std;

int main(){
    
  int mx = -999;
   int n;
   cout<< " enter n  ";
   cin>>n;

   int a[n];
    cout<< " enter data  ";
   for ( int i =0; i<n; i++){
       cin>>a[i];
   }

     for ( int i =0; i<n; i++){
     mx=   max( mx , a[i]);
     
     }
     cout<< mx << endl;
    return 0;
}
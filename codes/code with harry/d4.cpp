// q1 sheet rotating an array 
/*
input 2   5 2    1 2 3 4 5 
output 3 4 5 1 2 */
#include <iostream>
using namespace std;


int main(){
   int t, n, d;
   cin>>t;
   while(t--){
       cin>>n>>d;
       int arr[n];
       for(int i=0; i<n; i++){
           cin>>arr[(i+n-d)%n];
       }
       for(int i=0; i<n; i++){
           cout<<arr[i]<<" ";
       }
       cout<<endl;
   }

     return 0;
}
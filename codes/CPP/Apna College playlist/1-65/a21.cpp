// sum of largest sub array

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n ;
    cout<<" enter n  ";
       cin >>n;
 int arr[n] ;
 int maxsum = INT_MIN;  // initialised with min value;
 
    for ( int i=0; i<n; i++ ){
         cin>> arr[i]; 
    }
     for ( int i=0; i<n; i++ ){
         for ( int j=i; j<n; j++){
             int sum = 0;
             for ( int k = i; k<=j; k++){
                 sum+= arr[k];
                 

             }
           
           maxsum = max( maxsum ,sum );
         }
     }
     cout<< maxsum<<endl;
    return 0;
}
// search in an array
#include <iostream>
using namespace std;

void searching (int arr[] ,int a , int n){
     bool found = false;
     int j =0;
   for( j =0 ; j<n ;j++){
    if(arr[j] == a ){
       found = true;
       break;
    }
   }
   if(found == true){
   cout<<"found at "<<j+1<<"th position";}
   else{ cout<<"not found";}
}
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<" enter elements ";
    int array[n] ;
    for(int i =0; i<n ;i++){
        cin>>array[i];
    }
    cout<<"what you wants to find ";
    int a;
    cin>>a;
    searching(array , a,n);
     return 0;
}
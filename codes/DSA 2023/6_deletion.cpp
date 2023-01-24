// deletion in array

#include <iostream>
using namespace std;


void deletion( int arr[], int n, int pos){
    
    
    for (int i =pos; i<n; i++){
       arr[i-1] = arr[i];

    }
    n=n-1;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n =5;
    int arr[n] ={1,2,3,40,5};
   
    int pos;
    cout<<"delete at position ";
    cin>>pos;
    deletion(arr,n,pos);

    
     return 0;
}

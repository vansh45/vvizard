// insertion in array

#include <iostream>
using namespace std;


void insertion( int arr[], int n, int pos, int a){
    n= n+1;
    
    for (int i =n; i>=pos; i--){
       arr[i+1] = arr[i];

    }
    arr[pos-1] = a;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n =5;
    int arr[n] ={1,2,3,4,5};
    int a; 
    cout<<"enter the element to insert " ;
    cin>>a;
    int pos;
    cout<<"at position ";
    cin>>pos;
    insertion(arr,n,pos,a);

    
     return 0;
}

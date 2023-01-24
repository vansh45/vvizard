// reverse in array
#include <iostream>
#include <vector>
using namespace std;

void reverse(int arr[], int n){
    int s =0;
    int e = n-1;
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    s++; e--;
     for(int i =0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int n ;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i =0; i<n ;i++){
        cin>>arr[i];
    }
    reverse(arr , n);
     return 0;
}
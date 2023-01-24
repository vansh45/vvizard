#include <iostream>
using namespace std;
void swap(int arr[], int a, int b){
    int temp =arr[a];
    arr[a]= arr[b];
    arr[b]=temp;
}
void dnf(int arr[], int n){
 
 int low =0;
 int high =n-1;
 int mid =0;
 while(mid<=high) {  if(arr[mid]==0){
        swap(arr[low],arr[mid]);
    low++;
    mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else if(arr[mid]==2){
        swap(arr[mid],arr[high]);
        high--;
    }}
    
 }


int main(){
    int n;
    cout<<"enter length of array ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dnf(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     return 0;
     
}
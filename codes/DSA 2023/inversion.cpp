#include <iostream>
using namespace std;
// o (n2)

// do by merge sort v19.3
int count_inversions(int arr[], int n){
    int count = 0;
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
             if(arr[i]> arr[j]){
                count++;
                cout<<"("<<arr[j]<<","<<arr[i]<<") ";
             }
        }
    }
    return count;
}


int main(){
    int n;
    cout<<"enter the length of array ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<count_inversions(arr,n);
     return 0;
}
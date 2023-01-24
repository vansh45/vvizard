#include <iostream>
#include <limits.h>
using namespace std;
int max(int arr[] , int n){
   int max = INT_MIN;
   for(int i=0; i<n; i++){
    if(max<arr[i]){
        max = arr[i];
    }
   }
   return max;
}
void count_sort(int n, int arr[]){
    
  int  c_limit = max(arr,n);
  int count[c_limit+1] {0};
  for(int i=0; i<n; i++){
    count[arr[i]]++;
  }
  
  for(int i=1; i<=c_limit; i++){
    count[i] = count[i] + count[i-1];
  }
  int arr2[n] {0};
  for(int i=n-1; i>=0; i--){
  count[arr[i]]--;
  arr2[count[arr[i]]] = arr[i];
//   count[arr[i]]--;
  
  
  

}
for(int i=0; i<n; i++){
        cout<<arr2[i];
    }}
int main(){
     int n;
    cout<<"enter the length of array ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //cout<<max(arr,n);
    count_sort(n,arr);
    
     return 0;
}
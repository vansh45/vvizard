// insertion sort
#include <iostream>
using namespace std;

void insertion_sort(int n, int arr[]){
for(int i=1; i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;  // at last it becomes -1 
        }
            arr[j+1]= current;  //so 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
}
int main(){
    // whats the problem
    int n= 7;
 
    int arr[7] = ;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(n,arr[n]);
    
     return 0;
}
// kth smallest element
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp ;
    temp = *a;
    *a= *b;
    *b= temp;
}
void sort(int n, int arr[]){
    int k=0;
   
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
             if(arr[i]> arr[j]){
                swap(&arr[i],&arr[j]);
                
             }
             
        }
    }
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
    int k=0;
    cout<<"you want kth smallest no. where k = ";
    cin>>k;
    sort(n,arr);
    cout<<k<<"th smallest no. is "<<arr[k-1];
     return 0;
}
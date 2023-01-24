#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp ;
    temp = *a;
    *a= *b;
    *b= temp;
}
void bubble(int n, int arr[]){
    int loop =1;
    while(loop <n){
        for(int i =0; i<n-loop; i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            
            }
            
        }
        loop++;

    }
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
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
    bubble(n,arr);
     return 0;
}
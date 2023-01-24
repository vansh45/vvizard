// count no. of elements

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
void count(int n, int arr[]){
         sort(n,arr);
         int i =0,j =1;
         while(i<n-1){
            while(j<n+1){
                if(arr[i]==arr[j]){
                    j++;
                }
                else{
                    cout<<"count of "<<arr[i]<<" is "<<j-i<<endl;
                    j++;
                    i=j-1;
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
    count(n,arr);
     return 0;
     return 0;
}
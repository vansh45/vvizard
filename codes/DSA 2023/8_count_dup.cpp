// count duplicates in array

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
void find_duplicates(int n, int arr[]){

    

    for (int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
              cout<<"duplicate found which is "<<arr[j]<<endl;
            }
        }
    }

}



void count_dup(int n, int arr[]){
         sort(n,arr);
         int i =0,j =1; bool flag =0;
         while(i<n){
            while(j<n+1){
                if(arr[i]==arr[j] ){
                    j++;
                }
                else {

                    if((j-i)!= 1){
                        flag = 1;
                    }
                    if(flag ==1)
                    cout<<"the array has duplicate value for "<<arr[i]<<" repeated "<<j-i<<" times."<<endl;

                    j++;
                    i=j-1; flag =0;
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
    count_dup(n,arr);
     return 0;
}
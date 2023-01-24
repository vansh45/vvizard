// binary search itterative approach
#include <iostream>
using namespace std;

int binary_search(int arr[], int n , int key){
int start =0;
int end =n;
while(start<= end){
int mid = (start + end)/2;

if(arr[mid] == key){
    return mid;
}
else if(arr[mid]>key){
 end =mid-1;
}
else {start =mid+1;}

}
return -1;
}

void swap(int arr[], int i, int j){
    int temp =arr[i];
    arr[i]= arr[j];
    arr[j]=temp;
}


void sort(int arr[], int n){
 for(int i=0; i<n-1;i++){
      for(int j= i+1; j<n;j++){
          if(arr[i]>arr[j])
           swap(arr,i,j);
     }
  }
}

int main(){
    int arr[] = {5,6,4,2,8,7,9,12};
    int n=8;
  
  sort(arr,8);
  cout<<"sorted array is ";
  for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";}
   cout<<endl<<"the key is at index "<< binary_search(arr,8,7)+1;
     return 0;
}
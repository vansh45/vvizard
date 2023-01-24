// binary search reccursive approach
#include <iostream>
using namespace std;

int binary_search(int arr[], int start,int end , int key){

while(start<= end){
int mid = (start + end)/2;

if(arr[mid] == key){
    return mid;
}
else if(arr[mid]>key){
 return binary_search(arr,start,mid-1,key);
}
else {return binary_search(arr,mid+1,end,key);}
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
   cout<<endl<<"the key is at index "<< binary_search(arr,0,n-1,7)+1;
     return 0;
}
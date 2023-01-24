#include <iostream>
#include <limits.h>
using namespace std;

int max(int arr[], int n){
int mx = INT_MIN;
for(int i=0; i<n; i++){
    if(arr[i]>mx){
        mx = arr[i];
    }
}
return mx;
}

void count_sort(int arr[], int n,int x){
int arr2[n] {0};

int count[10] {0};
for(int i=0; i<n; i++){
 count[(arr[i]/x)%10]++;
}

for(int i=1; i<10; i++){
    count[i]+= count[i-1];
}

for(int i=n-1; i>=0; i--){
    arr2[count[(arr[i]/x)%10]-1] = arr[i];
    count[(arr[i]/x)%10]--;
}
 for (int i = 0; i < n; i++)
        arr[i] = arr2[i];
}

void radix(int arr[], int n){

    int mx = max(arr, n);
    for(int x=1; mx/x>0; x*=10){
    count_sort(arr,n,x);
    }

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
      radix(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     return 0;
    
}
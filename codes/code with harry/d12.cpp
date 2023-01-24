// q6 gsheet 
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max =-99;
     for(int i=0; i<n; i++){
         if(arr[i]>max){
             max=arr[i];
         }
     }
     int max2 =-1;
      for(int i=0; i<n; i++){
         if(arr[i]>max2 && arr[i]<max){
             max2=arr[i];
         }
     }
     cout<<max2;
     return 0;
}
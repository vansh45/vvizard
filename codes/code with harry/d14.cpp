// q8
#include <iostream>
using namespace std;

int main(){
   
   //input ex 4   6 2 5 3     5  4 6 3 5 9   
    int n; cin>>n;
    int arr[n];
    arr[0]={0};
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
     for(int i=1; i<n; i++){
    if (arr[i]==i){ cout<<i;}}
      return 0;
}
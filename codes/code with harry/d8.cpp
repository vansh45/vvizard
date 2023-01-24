// q2 gsheet 
#include <iostream>
using namespace std;

int algo(int arr[], int n){
    int sum1 =0 ;int sum2 =0;
    for(int i=0; i<n/2; i++){
    sum1 += arr[i];}

      for(int j=n/2; j<n; j++){
     sum2 += arr[j];}

     int answer = sum1*sum2;
    return answer;
}
int main(){
    int n; cin>>n;
    int arr [n];
    for (int i=0; i<n; i++){
        cin>>arr[i];}
      
   cout<<  algo(arr , n);
    
     return 0;
}
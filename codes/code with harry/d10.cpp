// q4 gsheet
#include <iostream>
using namespace std;

bool ifpossible(int n , int arr[]){
      int sum =0;
 for(int i=0; i<n; i++){
   
        sum +=arr[i];
        if(sum%3 ==0){
            return true;
        }
        return false;
    }

}
int main(){
     int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
   cout<< ifpossible(n,arr);
     return 0;
}
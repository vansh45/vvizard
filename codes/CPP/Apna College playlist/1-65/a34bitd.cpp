// find a unique number present only once in pairs of 2
// xor operator
#include <iostream>
using namespace std;

int unique(int arr[], int n){

    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
        // ^ symbol for xor ,

    }
    return xorsum;
}
int main(){
    
    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7)<<endl;
     return 0;
}
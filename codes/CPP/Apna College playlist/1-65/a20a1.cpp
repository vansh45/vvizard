// -- sum of sub arrays --
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

       int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];

    }
    int sum =0;
    for(int i=0;i<n;i++){
     
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<"sum from index "<< i<<" to " <<j<<" ";
            cout<< sum<<endl;
        }

    }
    return 0;
}
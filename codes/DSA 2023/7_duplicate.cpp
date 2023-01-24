// find duplicates

#include <iostream>
using namespace std;

void find_duplicates(int n, int arr[]){

    int count =0; 

    for (int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
              cout<<"duplicate found which is "<<arr[j]<<endl;
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
    find_duplicates(n,arr);
     return 0;
}
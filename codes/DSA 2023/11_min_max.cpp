// Min and Max in array
#include <iostream>
#include <limits.h>
using namespace std;

int main(){
     int n;
    cout<<"enter the length of array ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"max no in array is "<<max;
    cout<<"min no in array is "<<min;
     return 0;
}
#include <iostream>
using namespace std;

void insertion_sort(int n , int a[]){
     for(int i=1; i<n; i++){
        int current= i;
        int j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
     }
for(int j=0; j<n; j++){
    cout<<a[j]<<" ";
}
}
int main(){
    int n;
    cout<<"enter the length of array ";
    cin>>n;
    int a[n];
    cout<<"enter elements ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    insertion_sort(n,a);
    
     return 0;
}
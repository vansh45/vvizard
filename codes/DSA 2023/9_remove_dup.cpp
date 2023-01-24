// remove duplicates in array    has bug can not delete 3 consecutive dups

#include <iostream>
using namespace std;


void deletion( int arr[], int n, int pos){
    
    
    for (int i =pos; i<n; i++){
       arr[i-1] = arr[i];

    }
    n=n-1;

}
void remove_duplicates(int n, int arr[]){

    

    
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
    for (int k=0; k<n; k++){
        for(int j=k+1; j<n;j++){
            if(arr[k]==arr[j]){
                
            for (int i =j+1; i<n; i++){
                arr[i-1] = arr[i];
            }
             n=n-1;
            
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
     return 0;
}
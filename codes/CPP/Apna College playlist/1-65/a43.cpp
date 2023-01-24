#include <iostream>
using namespace std;

int firstocc( int arr[], int n, int i, int key){

if(i==n){
    return -1;
}
if(arr[i]==key){
    return i;
}
return firstocc(arr, n, i+1, key); //-- reccursion
}              // shuru se check karega



int lastocc( int arr[], int n, int i, int key){
    if(i==n){
    return -1;}
   
    if( lastocc(arr, n, i+1, key)!= -1 ){       // last se check karega
    return  lastocc(arr, n, i+1, key) ;    //-- reccursion
}
if(arr[i]==key){
    return i;
}
return -1;
}

int main(){
    int arr[] ={ 4,2,1,2,3,7,9,2,7};
    cout <<firstocc(arr,9,0,2)<<endl;
     cout <<lastocc(arr,9,0,2)<<endl;
    return 0;
}
// ---- arrays ----
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< " enter n  ";

    cin>>n;

    int array[n];

    for( int i=0; i<n ; i++){
        cin>>array[i]; 
    }
   
         for( int i=0; i<n ; i++){


        cout<< " your data for " <<i+1<< "th element in array is" <<array[i]<<endl;
    }
   // int array[4] = {77,93,54,67};   declared by me

    
    return 0;
}
// --- max & min in arrays ---
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int arr[n];
     cout<<"enter data ";
    for (int i=0 ; i<n; i++ ){
        cin >>arr[i];

    }

    int maxno= INT_MIN;
    int minno= INT_MAX;  // ye aisa hi hai 

    for (int i=0; i<n ;i++){
        maxno = max(maxno, arr[i]);
        minno= min( minno,arr[i]);

       /* may use this 
        if ( arr[i] > maxno){
            maxno = arr[i];

        }
          if ( arr[i] < minno){
            minno = arr[i]; */ 
    }

    cout<<"max no. is  " <<maxno<<" " <<"min no. is  "<<minno<<endl;
    return 0;
}
// ---- bubble sorting array ----
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter n "<<endl;
    cin>>n;
    int arr[n];
     cout<<"enter data ";
     cout<<endl;
    for (int i=0 ; i<n; i++ ){
        cin >>arr[i];}
        
     int counter = 1;
             while( counter < n )
             {
                 for ( int i =0; i < n-counter ; i++){
                     if( arr[i]> arr[i+1]){
                         int temp = arr[i];
                         arr[i] = arr[i+1];
                         arr[i+1] = temp;}
  /* n - counter. means we are not checking
last no. when c=1 , last 2 for c=2 .... */

                 }
                 counter++;

             }
             for (int i=0 ; i<n; i++ ){
        cout<<arr[i]<<"  ";}
        cout<<endl;

        return 0;
}
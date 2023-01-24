// ----- sorting array (accending order)
// selection sort
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

  for(int i=0; i<n-1;i++){
      for(int j= i+1; j<n;j++){
          if(arr[i]>arr[j])  // first ke baad ke elements arr j
   {
       int temp;
       temp = arr[j] ;
       arr[j] = arr[i];
       arr[i] = temp;
   }
   
     }

  }
   for (int i=0 ; i<n; i++ ){
        cout<<arr[i ]<<"  ";}
        cout<<endl;

 
}
// sabko check kiya phir sabse chote ko utha kar aage 
// kar diya aur fir use( first ) ko chor kar repeat.
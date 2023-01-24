// q5 gsheet
#include <iostream>
using namespace std;
int ispresent(int n, int arr[] ,int key){
    for (int i=0; i<n; i++){
        if(arr[i]==key){
            return i+1;
        }
       
    }
      return false;

}
int main(){
    cout<<"enter n "<<endl;
      int n; cin>>n;
     cout<<"enter array "<<endl;
    int arr [n];
    for (int i=0; i<n; i++){
        cin>>arr[i];}
        cout<<"enter key "<<endl;
         int key; cin>>key;
   cout<<ispresent(n ,arr, key);
     return 0;
}
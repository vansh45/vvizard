// ---- searching in arrays ---- 
#include<iostream>
using namespace std;
int linearsearch( int arr[] , int n, int key){
     for (int i=0 ; i<n; i++ ){
         if(arr[i]==key){
             return i;
         }
     }
     return -1;
}
int main(){
    int n ;
    cout<<"enter n ";
    cin>>n;
    int arr[n];
     cout<<"enter data ";
    for (int i=0 ; i<n; i++ ){
        cin >>arr[i];}
 int key ;
 cout<<" key is  ";
 cin>>key;
cout <<linearsearch(arr,n,key )<<endl;
return 0;
    }


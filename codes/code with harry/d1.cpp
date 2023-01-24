// majority element 
#include <iostream>
using namespace std;


int main(){
    int n ; cin>>n;

    int arr[n] ;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
   
    int freq[9];
    for(int i=0; i<9; i++)
    freq[i] =0;

    for (int i=0; i<n; i++)
    freq[arr[i]-0]++;

    int ans = 0;
    int maxf =0;
 for (int i=0; i<9; i++){
    if(freq[i] > maxf){
    maxf = freq[i];
    ans = i +0;}}
    cout<<ans<<" is having maximum frequency of "<<maxf<<endl;
     return 0;
}
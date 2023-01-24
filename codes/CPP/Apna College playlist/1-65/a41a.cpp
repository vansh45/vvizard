// checking sorted arrays using recurssion ///
#include <iostream>
using namespace std;
bool sorted (int arr[], int n){
    if(n==1){
        return true;
    }
bool restarray = sorted(arr+1,n-1);

return (arr[0]<arr[1] && restarray); // ie. rsestarray is true 


}
int main(){
    int arr[]={1,2,8,6,5};
    cout<<sorted(arr,4)<<endl;

     return 0;
}
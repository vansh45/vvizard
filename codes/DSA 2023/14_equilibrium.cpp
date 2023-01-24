//Time complexity=O(N)
#include <iostream>
#include <limits.h>
using namespace std;
int equi_point(int arr[],int n)
{
    int sum =0, i=0,diff =0;
    for(i=0; i<n; i++){
        sum =sum + arr[i];
    }
   int mid =sum/2; int sum1=0;
   int min= INT_MAX;int breaking_point=0;
   for(int i=0; i<n; i++){
    sum1+=arr[i];
    diff = abs(mid-sum1);
    if(min>diff)
    {
        min=diff;
        breaking_point=i;
    }
   }
    
    return breaking_point;
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

   cout<< equi_point(arr,n);
    
     return 0;
}
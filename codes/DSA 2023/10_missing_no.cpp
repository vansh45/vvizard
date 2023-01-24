// missing no. 

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp ;
    temp = *a;
    *a= *b;
    *b= temp;
}
void sort(int n, int arr[]){
    int k=0;
   
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
             if(arr[i]> arr[j]){
                swap(&arr[i],&arr[j]);
                
             }
             
        }
    }
    }
int missing_no (int n, int arr[]){
    int a[]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==arr[j])
            {
                count+=1;
            }
        }
        if(count==0)
        {
            return a[i];
        }
    }

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
    //sort(n,arr);
    /*
    cout<<"sorted array is ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }*/
    cout<<missing_no(n,arr);
     return 0;
}
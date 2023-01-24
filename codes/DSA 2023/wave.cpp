 #include <iostream>
 using namespace std;
 
void swap(int arr[], int i, int j){
    int temp =arr[i];
    arr[i]= arr[j];
    arr[j]=temp;
}
 void wave(int arr[], int n){
    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1]&& i<=n-2){
            swap(arr,i,i+1);
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
    wave(arr, n);
    cout<<"sorted array is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
     return 0;
 }
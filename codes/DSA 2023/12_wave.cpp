// wave array
 #include <iostream>
 using namespace std;

 void swap(int *a, int *b){
    int temp ;
    temp = *a;
    *a= *b;
    *b= temp;
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
    int i =0, j=1;
    while( i<n-1){
        
            swap(arr[i],arr[i+1]);
            i=i+2;
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<< ' ';
    }
     return 0;
 }
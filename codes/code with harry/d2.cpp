// reversing an array 
#include <iostream>
using namespace std;

void reverse(int n, int arr[]){
    for(int j=0; j<n;j++){
      int  temp = arr[j];
      arr[j] = arr[n-1-j];
       arr[n-1-j] = temp;
    
    }
    
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
     printArray(arr, n);
    reverse(n,arr);
     printArray(arr, n);
    
    
     return 0;
} // doubtttt!!!!!!!!
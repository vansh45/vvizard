#include <iostream>
using namespace std;

void apply_all(int arr[] ,int arr2[]){
int arr3[] ={0};

}
void print_arr(int arr[]){
   int *ptr = arr;
    for(int i=0; i<3; i++){
        cout<<*(ptr+i)<<endl;
    }
}
int main(){
    int arr[5] ={1,3,4,5,6};
    int arr2[3] = {8,9,10};
 print_arr(arr2);
     return 0;
}
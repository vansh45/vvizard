#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {2,4,6,8};
    int product =0;
    int sum =0;
    for (int i=0; i<arr.size(); i++ ){
        for( int j=i; j<arr.size(); j++){
            if(arr[i]!=arr[j]){
          product =arr[i]*arr[j];
          sum +=product;
            cout<<arr[i]<<"*"<<arr[j]<<" = "<<product<<endl;}
        }
    }
      cout << " total sum is  "<<sum;
     return 0;
}
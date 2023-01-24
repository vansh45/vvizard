// dynamic memory allocation seekhloa
// n queen in nxn chess
#include <iostream>
using namespace std;

bool issafe(int** arr, int x, int y, int n){

    // for upper column check
    for(int row =0; row<x; row++){
        if( arr[row][y]==1) // 1 means queen is placed{
           { return false;
        }     
    } 
    // left diagonal check 
    int row =x;
    int col =y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
     // right diagonal check 
     row =x;
     col =y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
}
return true;
}
// completing queens 
bool nqueen(int** arr, int x, int n){



  if(x>=n){
    return true;
  }
  // for each row and column 
  for (int col= 0; col<n; col++){
      if(issafe(arr,x,col,n)){
          arr[x][col]=1;

          if(nqueen(arr,x+1,n)){
              return true;
          }
          arr[x][col]=0; //backtracking
      }
  }
  return false;

}
int main(){
    int n;
    cin>>n;

    int** arr= new int*[n];
    for(int i=0; i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    if(nqueen(arr,0,n)){
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
    return 0;
}}
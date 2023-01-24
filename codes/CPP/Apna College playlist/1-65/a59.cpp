// rat in maze where 1 is open and 0 is closed path 

#include <iostream>
using namespace std;

bool issafe(int **arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}   // to check jaa bhi sakte ya nahi 

bool ratinmaze(int** arr, int x, int y, int n, int** solArr ){

if((x==(n-1)) && (y==(n-1))){
    solArr[x][y]=1;   // setting 1
    return true;
}
    if(issafe(arr, x,y,n)){
        solArr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;     //setting 0  backtracking
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i=0; i<n;i++){
        arr[i]=new int[n];
    }

        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                cin>>arr[i][j];
            }
        }

         
    int** solArr=new int*[n]; // <--- new memory
    for(int i=0; i<n;i++){
        solArr[i]=new int[n];  //<--- in all cases
        for(int j=0;j<n;j++){
            solArr[i][j]=0; // initialise
        }
    }
    if(ratinmaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
            for(int j=0; i<n;j++){
               cout<<solArr[i][j]<<" ";
            } cout<<endl;
        }
    }
    return 0;
}

/* 1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1   */

// nahi chalra 

//ans 

/* 1 0 0 0 0
   1 1 1 1 0
   0 0 0 1 0  
   0 0 0 1 1
   0 0 0 0 1   */
   
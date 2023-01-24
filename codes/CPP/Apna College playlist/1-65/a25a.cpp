// searching in  sorted matrices

#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n ,m;
     cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
int row=0, column=m-1;
bool found =false;

 while(row<n && column>=0){
     if(mat[row][column]== target){
         found = true;

     }
     if(mat[row][column]>target){
         column--;
     }
     else{
         row++;
     }
     }
     if(found)
     cout<<"element found";
     else{
         cout<<"element does not exist";
     }
 
     return 0;
}
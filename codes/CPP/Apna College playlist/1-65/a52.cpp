// way to reach from one pt to another in chess board of n,n 
// starting pt 0,0 so end n-1,n-1
#include <iostream>
using namespace std;

int countpathmaze(int n, int i, int j){
    if( i==n-1 && j==n-1){
        return 1;
    }
    if (i>=n || j>=n){
        return 0;
    }
    return countpathmaze(n,i+1,j) + countpathmaze(n,i,j+1);

}
int main(){
      
      cout<<countpathmaze(3,0,0);

    return 0;
}
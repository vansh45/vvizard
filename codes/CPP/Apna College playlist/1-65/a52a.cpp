// board of 2*n & tile of 2*1  
#include <iostream>
using namespace std;

int tilingways(int n ){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingways(n-1)+ tilingways(n-2);
  //  n-1 for verticals      n-2 for horizontals
}
int main(){
    cout<<tilingways(4)<<endl;
     return 0;
}
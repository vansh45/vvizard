// way to reach from one pt to another in snake & ladder
// 1-6 ie dice
#include <iostream>
using namespace std;

int countpath(int s, int e){
    if( s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count =0;
    for(int i=1; i<=6;i++){
        count+= countpath(s+i,e);
    }
    return count;
} 
int main(){
    
    cout<<countpath(0,3);
    return 0;
}
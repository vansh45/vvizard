// bit manipulation 
#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n &(1<<pos))!=0);
} // 0100 assume kiya hai 

int setBit(int n, int pos){
    return (n |(1<<pos));
} //copy me 

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return(n & mask);
}

int updateBit(int n, int pos, int value){
    //clearbit then set bit
    int mask =~(1<<pos);
    n = n & mask;
    return(n| (value<<pos));

}
int main(){
    
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
     return 0;
}

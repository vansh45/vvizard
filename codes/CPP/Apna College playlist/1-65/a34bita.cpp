// is power of 2 ? v34
#include <iostream>
using namespace std;

bool ispowerof2(int n){
    return(n &&!(n & n-1));       // return 1 for 0()
    // n&& means base case if n=0 whole will zero
}
int main(){ 
    cout<<ispowerof2(32);
     return 0;
} 
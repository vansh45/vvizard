#include <iostream>
using namespace std;

int getbit(int n, int position){
    return((n &(1<<position))!=0);
}
int setbit(int n, int position){
    return(n| (1<<position));
}

int main(){
    
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    return 0;
}
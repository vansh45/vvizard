#include <iostream>
using namespace std;

int power (int n, int p){
if( p==0){
    return 1;
}
     int prevpow = power(n, p-1);
    return prevpow*n;
    // or return power(n,p-1)*n;

}
int main(){
    int n, p;
     cin >>n>>p;
     cout<< power(n,p);

    return 0;
}
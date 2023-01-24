// sieve of eratosthenes
// prime n0. m2   v36

// we will mark elements multiple of prime no. from 2
#include <iostream>
using namespace std;
void primesieve(int n){
     int prime[100] ={0};
    for(int i=2; i<=n; i++){
        if (prime[i]==0); // unmarked 
        {
            for(int j = i*i; j<=n; j+=i){  // as first unmarked will be at i^2
            prime[i]=1;  //marked  ^-- multiple of i
            }
        }
    }

for(int i=2; i<=n; i++){
    if(prime[i] == 0){
        cout<<i<<" ";
    }
}cout<<endl; }

int main(){
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}
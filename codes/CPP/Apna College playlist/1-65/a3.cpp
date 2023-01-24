// ---- for printing values not divisible by n. let n=3--

#include <iostream>
using namespace std;

int main(){
    cout<<"enter number";
for ( int i=0; i<=30; i++)
{
if( i%3 ==0){
continue;

}
cout<<i<<endl;
}
    return 0;
}
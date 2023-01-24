// power 
#include <iostream>
using namespace std;

int power(int basenum, int pownum){
    int result =1;
    for(int i=0; i<pownum; i++){
        result = result*basenum;
    }
    return result;
 
}
int main(){
    int a ,b ;
    cout<<"enter base no.   ";
    cin>>a;
    cout<<"enter power no.  ";
    cout<<power(a , b);

    return 0;
}
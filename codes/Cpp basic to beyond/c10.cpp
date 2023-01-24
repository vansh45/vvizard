#include <iostream>
using namespace std;

int main(){
    // int scores[] {23, 99, 83, 43};
    // for(int score: scores)
    // cout<<score<<"  ";
    // // do same but we need not to tell it will know
    // int scores[] {23, 99, 83, 43};
    // for(auto score: scores)
    // cout<<score<<"  "<<endl;

    // for( auto val : {1,3,4,2,6})
    // cout<<val<<endl;

    for(auto a :"hello i am vansh"){
    if(a!=' ')
    cout<<a;
    }
    cout<<endl;
    for(auto b :"aajdfhdf;aasndejdnasaaeada"){
    if(b!='a')
    cout<<b;
    }
     return 0;
}
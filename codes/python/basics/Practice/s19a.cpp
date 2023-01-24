// guess the number m2
#include <iostream>
using namespace std;


int main(){
    int secretnum =7;
    int guess;
    int guesslimit =3;
    int guesscount =0;
    bool outofguesses = false;

    while(secretnum !=  guess && !outofguesses){
        if(guesscount < guesslimit){
        cout<<"enter guess :  ";
        cin>>guess;
        guesscount++;
        }
        else{ 
            outofguesses = true;
        }
        
    }
    if(outofguesses){
        cout<<"you lose!";
    } else { 
     cout<<"you won!!";}
    return 0;
}
#include <iostream>
using namespace std;
void guesstheno( int x ){
    
    int number;
    number = (rand()%15)+1;
    for(int y=0;y<3;y++){
    cin>>x;
    if(x==number) {
        cout<<" ek crorrrrrre ";
        break;}
    else if(x>number){
        cout<<"lower no. please ";
    }
    else if(x<number){
        cout<<"bigger no. please  ";}

          if (y==2 ){cout<<"you lost";}
    }}


int main(){
    cout<<"guess the number!  ";
    int x;
    guesstheno(x);
   
    return 0;
}
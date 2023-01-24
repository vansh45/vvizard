#include <iostream>
using namespace std;

int main(){
    int change;
    cout<<"enter the amount in cents "<<endl;
    cin>>change;
     int dollars = change /100 ;
     int r1 = change%100;
     int quaters = r1/25;
     int r2 = r1%25;
     int dimes = r2/10;
     int r3 = r2%10;
     int nickels = r3/5;
     int r4 = r3%5;
     int pennies= r4;

     cout<<"you can be provided with "<<endl;
     cout<<"dollars : "<<dollars<<endl;
     cout<<"quaters : "<<quaters<<endl;
     cout<<"dimes   : "<<dimes<<endl;
     cout<<"nickels : "<<nickels<<endl;
     cout<<"pennies : "<<pennies<<endl;
     return 0;
}
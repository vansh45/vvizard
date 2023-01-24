#include <iostream>
using namespace std;

float moneyrecieved(int currentamount , float factor=1.04){

return currentamount*factor;

}


int main(){
    int money;
    cout<< " enter money  ";
    cin>>money;
    cout<<"if you have  "<<money<<" rs in your bank account , you will recieve   "
    <<moneyrecieved(money)<<" rs after 1 year";

     cout<<"if vip have  "<<money<<" rs in your bank account , you will recieve   "
    <<moneyrecieved(money , 1.1)<<" rs after 1 year";
    return 0;
}
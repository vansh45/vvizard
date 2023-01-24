#include <iostream>
using namespace std;

int main() {
int i,j;
cin>>i>>j;


string num[10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

for(i<=9 ; i<=j; i++){
    cout << num[i]<<endl;
     i<=j;
}
for(j>=9;j>i;i++){
    if( j%2==0){cout<<"even";}
    else{cout<<"odd";}
}

   
    
return 0;
}
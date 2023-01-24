// q7
#include <iostream>
using namespace std;

bool facinating(int arr[]){

}
int main(){

    int n ; cin>>n;
    int a =2*n , b =3*n; 
    int freq [10]={0};
    while(n>0){
   
    int lastdigit = n%10;
        freq[lastdigit]++;
        n=n/10;
    }
     while(a>0){
    
    int lastdigit = a%10;
        freq[lastdigit]++;
        a=a/10;

    }
     while(b>0){
   
    int lastdigit = b%10;
        freq[lastdigit]++;
        b=b/10;

    }
int res;
for(int i=1; i<=9; i++){
if(freq[i]==1){res=1;}
else{res=0;
break;}
}
 if (res==1){cout<<"yesss";}
 if (res==0){cout<<"false";}
     return 0;
}
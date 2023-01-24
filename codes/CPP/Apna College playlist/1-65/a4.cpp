//----multi language robot----


#include <iostream>
using namespace std;

int main(){
    char button;
    cout<<" input a character "<<endl;
    cin>>button;
 switch ( button )
{  
 case 'a' :
 cout<<"hello"<<endl;
 break;

 case 'b' :
 cout<<"hola"<<endl;
 break;

 case 'c' :
 cout<<"namaste"<<endl;
 break;

 case 'd' :
 cout<<"ciao"<<endl;
 break;

  case 'e' :
 cout<<"salut"<<endl;
 break;

 default:
 cout<<" mujhe kuch nahi pata"<<endl;
 break;
 }


    return 0;
}
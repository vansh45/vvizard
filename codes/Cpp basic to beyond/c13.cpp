#include <iostream>
#include<string>
using namespace std;

int main(){
    string s1 {0};
    getline(cin ,s1);

    for(int i=0; i<s1.length(); i++){
     if(s1[i]=='a'){
         s1[i] = 'x';
     }

      if(s1[i]=='b'){
         s1[i] = 'y';
     }
    }
    cout<<s1;
     return 0;
}
// assignment 1 udemy c btb

#include <iostream>
#include<string>
using namespace std;

int main(){
      string s;
   
   getline(cin,s);
  int n = s.length();
    for (int i = 1; i <= n; i++)
    {    int j;
        for (j = 1; j <= n-i; j++)
        { cout<<" "; }

   /*    char k= s[0];
        for(; j<=n; j++){        // <<<<-------
            cout<<k++<<" ";
        }
        k=s[i-2];
        for(;j<=n+i-1;j++){
         cout<< k--<<" "; }
          cout <<endl;*/
        int z =0;
           char k= s[z];
        for(; j<=n; j++){        // <<<<-------
            cout<<s[z++];
        }
        z=i-2;
        for(;j<=n+i-1;j++){
         cout<<s[z--]; }
          cout <<endl;
    } // i for rows   j for columns   k for numbers 
     return 0;
}
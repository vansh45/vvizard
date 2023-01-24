#include <iostream>
using namespace std;

int main(){
      int n;
   
    cin >> n;

    for (int i = 1; i <= n; i++)
    {    int j;
        for (j = 1; j <= n-i; j++)
        { cout<<"  "; }

        int k= 1;
        for(; j<=n; j++){        // <<<<-------
            cout<<k++<<" ";
        }
        k=i-1;
        for(;j<=n+i-1;j++){
         cout<< k--<<" "; }
          cout <<endl;
    } // i for rows   j for columns   k for numbers 
     return 0;
}
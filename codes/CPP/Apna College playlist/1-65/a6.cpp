#include <iostream>
using namespace std;

//  1. ----- filled rectangle -----

/*int main(){
    
    int row , col;
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
          for(int j=1; j<=col; j++){
              cout<<"*";
          }
          cout<<endl;
    }
    return 0;
}*/

//  2. ---- hollow rectangle ----

/*int main(){
    
    int row , col;
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
          for(int j=1; j<=col; j++){
              if ( i== row || i == 1 || j== 1 || j== col)
             { cout<<"*";}
             else{ cout<<" ";}

          }
          cout<<endl;
          
    }
    return 0;
}*/

// 3. ------ inverted half pyramid -------

/*
int main(){
    
    int n;
    cin>>n;

    for(int i=n; i>=1; i--)
    {
          for(int j=1; j<=i; j++){
              cout<<"*";
          }
          cout<<endl;
    }
    return 0;
}
*/
// 4. ----- pyramid by numbers -----

/* int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
          for(int j=1; j<=i; j++){
              cout<<i<<" ";
          }
          cout<<endl;
    }
    return 0;
}   
*/
// 5. ---- floyd's triangle ----
/*
int main(){
    
    int n;
    int count = 1;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
          for(int j=1; j<=i; j++){
              
              cout<<count<<" ";
              count++;
          }
          cout<<endl;
    }
    return 0;
} */

// 6. ----- butterfly pattern -----

// formula for space = 2*n - 2*row no.
/* int main()
{

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        int space = 2 * n - 2 * i;

        for (int j = 1; j <= space; j++){
            cout << " ";}

        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
            cout << endl;
        }

       for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {

                cout << "*";
            }
            int space = 2 * n - 2 * i;

            for (int j = 1; j <= space; j++){
                cout << " ";}

            for (int j = 1; j <= i; j++)
            {

                cout << "*";}

                cout << endl;
            }   
                return 0; 
    } */

    //7.---- inverted pattern ----
/*
      int main()
{

    int n;
   
    
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
        
            cout <<j<<" ";
        } cout<<endl;
        }
        return 0; }
*/
  // 8.--- 0-1 pattern --- 
/*
 int main()
{

    int n;
   
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
         if( (i + j)%2 == 0 ){
            cout << "1 ";}
            else { cout<< "0 "; }
        } 
        cout<< endl;
    }
        return 0; } 

*/
  // 9. ----- rhombus pattern -----
/*
  int main()
{

    int n;
   
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        { cout<<" "; }
        for( int j=1; j<=i; j++){
            cout<<"* ";
        }
         cout<<endl;
    }
    return 0; } 
*/
    // 10. ---- palindromic pattern ---- 

    
    
    int main()
{

    int n;
   
    cin >> n;

    for (int i = 1; i <= n; i++)
    {    int j;
        for (j = 1; j <= n-i; j++)
        { cout<<"  "; }

        int k= i;
        for(; j<=n; j++){        // <<<<-------
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
         cout<< k++<<" "; }
          cout <<endl;
    }
   
    return 0; }   
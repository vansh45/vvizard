// ----- 2d array -----

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << " enter the values of n and m  ";
    cin >> n >> m;
    int arr[n][m];
    cout << " enter the matrix "<<endl;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
        }
    }

  
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
  cout << "  enter the value to be found "<<endl;
    int x;
    cin >> x;
  bool vv = false;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout<<i+1<<","<<j+1<<endl;
                vv = true;
            }
           
        } }
        if (vv){ cout<< " element is found";}
        else { cout << " f ";}

        return 0;
    }
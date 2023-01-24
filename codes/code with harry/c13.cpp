#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {  
       // for( int h=1 ; h< 5 ; h++){ bc ye kyu execute ni hora
        salary = 122;
        cout << "enter the id of employee  " <<endl;//h<< 
        cin >> id;//}
    }
    void getid(void)
    {
           
        cout << "the id of this employee no. is " << id << endl;
    }
};
int main()
{
    /* employee vansh, tillu, pappu;
    vansh.setid();
    vansh.getid();

    tillu.setid();
    tillu.getid();*/
    employee vv[5];
    for (int i = 0; i < 4; i++)
    {
        vv[i].setid();
        vv[i].getid();
    }
    return 0;
}
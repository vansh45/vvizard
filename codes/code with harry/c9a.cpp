//         structures
#include <iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char grade;
    float salary;

}aa;
// in 'union' can only use one while define many
// ie share memory 
int main(){
     struct employee vansh;
     aa roman;

     vansh.salary = 100000000;
     vansh.eid= 75;
     vansh.grade = 'A';
     roman.salary = 140000;
     roman.eid= 13;
     roman.grade = 'C';

     cout<< "---- "<<vansh.eid<<endl;
     cout<< "---- "<<vansh.salary<<endl;
     cout<< "---- "<<vansh.grade<<endl;
     cout<< "---- "<<roman.eid<<endl;
     cout<< "---- "<<roman.salary<<endl;
     cout<< "---- "<<roman.grade<<endl;
     return 0;
}
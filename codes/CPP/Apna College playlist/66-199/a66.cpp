// CLASSES

// all public
#include <iostream>
using namespace std;

class student {
public:
string name;
int age;
bool gender;


void showinfo(){
     cout<<"name = ";
      cout<<name<<endl ;
      cout<<"age = ";
      cout<<age<<endl ;
       cout<<"gender = ";
      cout<<gender <<endl;
}
};
int main(){
  /*  student a;
    a.name = 'vansh';
    a.age =19;
    a.gender = 0;

  //   can be created for individual students OR-
   */

  student arr[3];
  for (int i=0; i<3; i++){
      cout<<"name = ";
      cin>>arr[i].name ;
      cout<<"age = ";
      cin>>arr[i].age ;
       cout<<"gender = ";
      cin>>arr[i].gender ;
  }
 for (int i=0; i<3; i++){
    arr[i].showinfo();}
     return 0;
}
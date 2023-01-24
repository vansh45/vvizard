// CLASSES

// setting private data
#include <iostream>
using namespace std;

class student {
string name;
public:

int age;  
bool gender;

void setname(string s){
    name =s;
}

void getname(){
     cout<<"name = ";
    cout<<name<<endl;
}

void showinfo(){
   /*  cout<<"name = ";
      cout<<name<<endl ; */ // does the samein place of get funcn
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
string s;
      cout<<"name = ";
 cin>>s ;
 arr[i].setname(s);
      cout<<"age = ";
      cin>>arr[i].age ;
       cout<<"gender = ";
      cin>>arr[i].gender ;
  }
        for (int i=0; i<3; i++){
     arr[i].getname();
     arr[i].showinfo();
     
        }
     return 0;
}
// CLASSES

// setting private data , constructor distructor
// 5/10
#include <iostream>
using namespace std;

class student{
string name;
public:

int age;
bool gender;
// default constructor (ignore it )
student(){
    cout<<"default constructor"<<endl;
}
//parameterised constructor -
student(string s , int a, int g){
    cout<<"parameterised constructor "<<endl;
    name =s;
    age = a;
    gender =g;
}
student(student &a){
  cout<<"copy constructor"<<endl;
name= a.name;
age = a.age;
gender = a.gender;
}

~student(){
  cout<<"destructor called"<<endl;
}
// if we create a constructor the default
 //constructor  exits




void showinfo(){
     cout<<"name = ";
      cout<<name<<endl ; 
      cout<<"age = ";
      cout<<age<<endl ;
       cout<<"gender = ";
      cout<<gender <<endl;
}

 // ***  operator overloading
 bool operator== (student &a){
   if (name== a.name && age== a.age && gender ==a.gender){
     return true;
   }
   else {return false;}
 }
};
int main(){
  
        student a("vansh" , 34 ,1);
        a.showinfo();
        student b;
        student c(a); //or student c =a;
        student d("tillu", 14, 1);



        if(d==a){ // will show error without ***
          cout<<"same"<<endl;
        }
        else{
          cout<<"not same"<<endl;
        }
     return 0;
}
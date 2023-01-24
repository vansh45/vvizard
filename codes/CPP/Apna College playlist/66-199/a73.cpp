// 3. runtime polymorphism
#include <iostream>
using namespace std;

class base{
public:
 virtual void print(){
    cout<<"this is the base class's print function"<<endl;
} // virtal inhibit activity
void display(){
    cout<<"this is the base class's display function"<<endl;
    }
}; 
class derived: public base{
    public:
   void print(){
    cout<<"this is the derieved class's print function"<<endl;
}
    void display(){
    cout<<"this is the derieved class's display function"<<endl;
    }
};

int main(){
    base *baseptr;  
    derived d;
    baseptr = &d;
    baseptr -> print(); // ->  notusing . bcoz it is pointer
    baseptr -> display(); // -> means ka
 
  /*  base baseptr;
    derived d;
     d.print();
    d.display();
    baseptr.print();
    baseptr.display();
 will not give the req. arguments */
     return 0;
}
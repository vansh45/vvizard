// queue using stacks m1( 2 stacks)
#include <stack>
#include <iostream>
using namespace std;

class q{
    stack<int> s1;
    stack<int> s2;

public:
void push(int x){
    s1.push(x);
}
int pop(){
    if(s1.empty() && s2.empty()){
        cout<<"queue is empty\n";
        return -1;
    }
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int topval = s2.top(); 
    s2.pop();
    return topval;
}
bool empty(){
     if(s1.empty() && s2.empty()){
         return true;
     }
     return false;
}
};
int main(){
    q q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
     return 0;
}
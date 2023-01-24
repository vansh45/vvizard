// reverese a stack  (using two stacks)
#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    stack<int> b;
    while(!a.empty()){
        b.push(a.top());
        cout<<b.top()<<" ";
        a.pop();
    }

     return 0;
}
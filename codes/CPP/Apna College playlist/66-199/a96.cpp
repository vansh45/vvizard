// Deque(double ended queue)
#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    dq.push_front(-1);
     cout<<"size of deque is "<<dq.size()<<endl;
    for(auto i : dq)
    cout<<i<<" ";
    cout<<endl;

    dq.pop_front();
    dq.pop_back();
     for(auto i : dq)
    cout<<i<<" ";
    cout<<endl;
     return 0;
}
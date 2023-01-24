#include <iostream>
using namespace std;

#define n 10

class stack{
    int * arr;
    int top;
public:
    stack(){
        arr = new int[n];
        top = -1;
       
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
        
    }

    bool empty(){
        if (top == -1){
            return true;
        }
    }

    void display_stack(){
      while(top>-1){  
        cout<<Top()<<" ";
        top--;}
        cout<<"$"<<endl;
    }
};
int main(){
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.display_stack();
     return 0;
}
#include <iostream>
#include <stack>
using namespace std;
void insert_at_bottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int top_element = st.top();
    st.pop();
    insert_at_bottom(st, element);
    st.push(top_element);
}
void reverse(stack <int> &st){
    if(st.empty()){
        return;
    }
    int element = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st,element);
}
 void display_stack(stack <int> &st){
      while(!st.empty()){  
        cout<<st.top()<<" ";
        st.pop();}
        cout<<"$"<<endl;
    }

int main(){
    
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int> ut = st;
    display_stack(ut);


    reverse(st);
    
    display_stack(st);
     return 0;
}
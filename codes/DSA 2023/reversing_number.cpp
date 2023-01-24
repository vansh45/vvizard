#include <iostream>
#include <string>
using namespace std;
#define n 100

class stack{
int *arr;
int top;
public:
stack(){
arr = new int[n];
 top = -1;
}

void Push(int a){
    if(top == n){
        cout<<"stack overflow"<<endl;
    }
        top++;
        arr[top] = a;
    
}

void Pop(){
    if(top == -1){
        cout<<"no element to pop"<<endl;
    }
    top--;
}

bool empty(){
    return(top==1);
    }

int Top(){
    if(top ==-1){
        cout <<"no element to show"<<endl;
        return -1;
    }

    return arr[top];
}
void display_stack(){
      while(top>-1){  
        cout<<Top()<<" ";
        top--;}
        cout<<"$"<<endl;
    }
};

void int_to_arr(int a){
    int m = to_string(a).length();
    int arr[m] ;
    for(int j=m-1; j>-1; j--){
        arr[j] = a %10;
        a = a/10;
    }
    for(int j=0; j<m; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

}

void reverse_a_number(int a ){
    stack s;
    long m = to_string(a).length();
    int arr[m] ;
    for(int j=m-1; j>-1; j--){
        arr[j] = a %10;
        a = a/10;
    }
    for(int i=0; i<m; i++){
    s.Push(arr[i]);
    }
    for(int i=0; i<m; i++){
        cout<<s.Top()<<"";
    s.Pop();
    }
    
  // s.display_stack();
    
    
}

int main(){
    // stack st;
    // st.Push(5);
    // st.Push(4);
    // st.Push(2);
    // st.display_stack();
    // cout<<st.Top()<<endl;

    // int b = 9893;
    // int_to_arr(b);
   int l ;
   cout<<"Enter no. to be reversed ";
   cin>>l;
   cout<<endl<<"Here it is ";
   reverse_a_number(l);
     return 0;
}
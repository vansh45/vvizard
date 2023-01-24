#include <iostream>
#include <string>
using namespace std;
#define n 100

class stack{
char *arr;
int top;
public:
stack(){
arr = new char[n];
 top = -1;
}

void Push(char a){
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

char Top(){
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

void reverse_a_string(string a ){
    stack s;
    long m = a.length();
    
    // for(int j=m-1; j>-1; j--){
    //     a[j] = a %10;
    //     a = a/10;
    // }
    for(int i=0; i<m; i++){
    s.Push(a[i]);
    }
    for(int i=0; i<m; i++){
        cout<<s.Top()<<"";
    s.Pop();
    }
    
  // s.display_stack();
    
    
}

int main(){
    // stack st;
    // st.Push('a');
    // st.Push('s');
    // st.Push('k');
    
    // cout<<st.Top()<<endl;

    // st.display_stack();

    // int b = 9893;
    // int_to_arr(b);


  string l ;
   cout<<"Enter a word to be reversed :";
   cin>>l;
   cout<<endl<<"Here it is :";
   reverse_a_string(l);
     return 0;
}
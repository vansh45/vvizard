// linked list sq 3
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;  // pointer 
    node(int value){
        data = value;
        next= NULL;
    }
}; 

void insertAtTail(node*&head, int value){

    node* n = new node(value);
    if( head == NULL){
        head =n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =n;
}

void insertAtHead(node* &head, int value){
    node*n = new node(value);
    n->next = head;
    head=n;
}
void display(node* head, int n){
    node* temp = head;
    while(temp->next!= NULL && n!=1){
        
        temp = temp->next;
        n--;
    }
     cout<<"<<"<<temp->data<<">>";
  
}
  
int main(){
    node* head = NULL;
    int a; cin>>a; 
    int arr[a];
  for (int i=0; i<a; i++){
      cin>>arr[i];
  }
   for (int i=0; i<a; i++){
       insertAtTail(head,arr[i]);
   }
   int b; cin>>b;
    int j =a/b;
   display(head ,j);
     return 0;
}
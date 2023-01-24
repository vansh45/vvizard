#include <iostream>
using namespace std;

class node{
public:
int data;
node *next;
node(int value){
    data = value;
    next = NULL;
}
};
void insertAtTail(node*&head ,int value){
    node *n = new node(value);
    if(head == NULL){
    head =n;
    return;}
    node *temp =head;
    while(temp->next!=NULL){
        temp =temp->next;
            }
temp->next=n;
}
void insertAtHead(node* &head, int value){
    node*n = new node(value);
    n->next = head;
    head =n;
}
void display(node*head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<">>";
        temp = temp->next;
    }
    cout<<"NULL";
}
void arrange(node*&head){
    node* a =head;
    while(a->next!=NULL){
  if(a->next->data==0){
  insertAtHead(head ,a->data);
  a=a->next->next;
  }
 if(a->next->data==1){
  insertAtTail(head ,a->data);
  a=a->next->next;
  }
  
    }
    a=a->next;
}
int main(){
      node* head = NULL;
    int arr[]= {9,0,5,1,6,1,2,0,5,0};
    for(int i=0;i<10;i++){
         insertAtTail(head, arr[i]);
    }
    display(head);
   cout<<endl;
   arrange(head);
   cout<<endl;
    display(head);
    
}
// linked list 
// reverse k node v60
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
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
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<">>";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}
node* reversek(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count =0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr = currptr;
        currptr= nextptr;
        count++;
    }
    if(nextptr!=NULL){ 
        head->next = reversek(nextptr,k);
    } 
  return prevptr;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtHead(head,0);
    display(head);
    int k=2;
    node* newlist = reversek(head,k); 
   display(newlist);
     return 0;
}
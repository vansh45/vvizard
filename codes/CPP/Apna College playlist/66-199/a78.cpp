// double linked lists
// NULL ⇋ 1 ⇋ 2 ⇋ 3 ⇋ 4 ⇋ 5 ⇋ NULL
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;  
    node* prev;
    node(int value){
        data = value;
        next= NULL;
        prev= NULL;
    }
};

void insertAtHead(node* &head, int value){
    node*n = new node(value);
     n->next = head;
    if(head!=NULL){
       
         head->prev=n;
    }
    head=n;
}

void insertAtTail(node*&head, int value){

    node* n = new node(value);
    node* temp = head;
    if( head == NULL){ 
       insertAtHead(head,value);
        return;
    }
    
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =n;
    n->prev= temp;
}
 
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"<>";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}
void deleteAtHead(node* &head){
    node* todelete =head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deletion(node*&head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count =1;
    while(temp!=NULL && count!= pos){
        temp=temp->next;
        count++;
    } 
    temp->prev->next= temp->next;
    if(temp->next!=NULL){
    temp->next->prev= temp->prev; } 
    delete temp;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    //insertAtHead(head,0);
    //display(head);
    deletion(head,4); // at 4th position
      display(head);
     return 0;
} 
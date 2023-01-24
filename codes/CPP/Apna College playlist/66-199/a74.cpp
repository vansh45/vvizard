// linked list 
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
//  object^        ^ constructor
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
void display(node* temp){
    
    while(temp!= NULL){
        cout<<temp->data<<">>";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}
    bool search(node* head, int key){
        node* temp = head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        } 
        return false;
    }
void deleteAtHead(node* &head){
    node* todelete =head;
    head=head->next;

    delete todelete;
}
void deletion(node* &head, int value){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp =head;
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;

    delete todelete;
// is unable to delete 1st node as we're using n-1
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,5);
    display(head);
    cout<<search(head,2)<<endl;
    deletion(head,2);
     //deleteAtHead(head);
    display(head);
     return 0;
}
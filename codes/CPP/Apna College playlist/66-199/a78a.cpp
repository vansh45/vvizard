// append last k nodes ll 
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
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<">>";
        temp = temp->next;
    }
    cout<<"null"<<endl;
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
int length(node *head){

    int l=0;
    node* temp =head;
    while(temp!=NULL){
   l++;
   temp = temp->next;
    }
    return l;
}
node*kappend(node* &head, int k){
node* newHead;
node* newTail;
node* tail = head;

int l = length(head);
k=k%l;
int count =1;
while(tail->next!=NULL){
    if(count == l-k){
        newTail =tail;
    }
    if(count == l-k+1){
        newHead = tail;
    }
    tail = tail->next;
    count ++;
}
newTail->next=NULL;
tail->next=head;

return newHead;
}
int main(){
    node* head = NULL;
    
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,1);
    insertAtTail(head,4);
    insertAtTail(head,5);
     insertAtTail(head,6);
   
    node * newHead = kappend(head, 2);
     display(newHead);
   
   
     return 0;
}
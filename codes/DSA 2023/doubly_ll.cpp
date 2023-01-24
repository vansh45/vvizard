#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node * next;
    node *prev;
    node( int value ){
        next =NULL;
        prev =NULL;
        data = value;
    }
};

void insert_at_tail(node*&head, int value){
node* n = new node(value);
 if(head == NULL){
  head = n; return;
  }
node *temp = head;

while(temp->next!=NULL){
    temp= temp->next;
}
temp->next = n;
n->prev=temp;
}

void insertion(node*&head,int position, int value){
 node*n = new node(value);
 node*temp = head;
 int pos = 1;
 while (temp->next!= NULL && pos!=position ){
    temp = temp->next; 
    pos++;
 }
 n->next = temp->next;
 temp->next->prev =n;
 temp->next = n;
 n->prev = temp;
}
void deletion_at_head(node*&head){
    node*dval = head;
    head = head->next;
    delete dval;
}
void deletion_by_value(node*&head , int value){
 if(value == head->data){
        deletion_at_head(head);
        return;
    }
if(head==NULL){
    return;
}
if(head->next==NULL){
    deletion_at_head(head);
    return;
}
node*temp = head;
while(temp->next!= NULL && temp->next->data!= value){
  temp= temp->next;
}
node* dval =temp->next;
temp->next= temp->next->next;
temp->next->next->prev = temp;
delete dval;
}

void deletion_by_position(node*&head , int position){
if(head==NULL){
    return;
}
if(head->next==NULL){
    deletion_at_head(head);
    return;
}
node*temp = head;
int pos = 1;
while(temp!= NULL && pos!=position){
  temp= temp->next;
  pos++;
}
temp->prev->next= temp->next;
    if(temp->next!=NULL){
    temp->next->prev= temp->prev; } 
    delete temp;
}

void display(node*temp){
    cout<<"NULL"<<" <-> ";
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}

/*void display_back(node*head){
    node *temp = head;
    while(temp!=NULL){
        
        temp =temp->next;
    }
    node* last = temp;
    cout<<last->data;
    while(temp!=head){
    temp= temp->prev;
    cout<<temp->data<<" <-> ";
    }
}*/
int main(){
    node *head = NULL;
    node *tail = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    insert_at_tail(head,7);
    insert_at_tail(head,8);
    display(head);
    // insertion(head,3,35);
    // display(head);
    deletion_by_position(head,6);
    // deletion_by_value(head,3);
    
    display(head);

   // display_back (tail);
     return 0;
}
// reversing a linked list 
// m1 ittrative  way a to b
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
node* reverse(node* &head){
node* prevptr =NULL;
node* currptr= head;
node* nextptr;

while(currptr!=NULL){
nextptr= currptr->next; // point kiya
currptr->next=prevptr; // assign kiya
 
prevptr =currptr;
currptr=nextptr;
}  
head = prevptr; //new head   
}

// m2 reccursive way b to a
/*node* reverseRecursive(node* &head){

    if(head==NULL|| head->next ==NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}*/
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    
    insertAtHead(head,0);
    display(head);
    reverse(head);
    //node* newhead = reverseRecursive(head);
    display(head);
   
     return 0;
}
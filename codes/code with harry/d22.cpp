// sorting ll
#include <iostream>
#include<climits>
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
void display(node*head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<">>";
        temp = temp->next;
    }
    cout<<"NULL";
}

node* arrange(node*&head){
    node* p0 =head;
    node* p1 =new node(-1);
    node* p = p1;
    int minno= 999;

         /* nahi banra yrrr sorting ll  
         return int nahi hoga node funcn
          me aur void me new node ka pointer nahi arra
          f*/
                 




cout<< minno;
deletion(head ,minno);
arrange(head);
}

int main(){
      node* head = NULL;
    int arr[]= {9,5,1,6,2,7,8};
    for(int i=0;i<7;i++){
         insertAtTail(head, arr[i]);
    }
   // display(head);
   cout<<endl;
   arrange(head);
   cout<<endl;
    display(head);
    
}
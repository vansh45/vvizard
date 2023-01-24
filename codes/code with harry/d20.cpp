// linked list sq4
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
void insertAtMiddle(node*&head ,int value , int c){
    node* n =new node(value);
    node* temp =head;  
    while(temp->next!=NULL && c!=1){
        temp = temp->next; c--;
    }
    node* b =temp->next;
    temp->next = n;
    n->next =b;
    
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
   
int main(){
    node* head = NULL;
    cout<<"enter n  "<<endl;
    int n; cin>>n;
   cout<<"enter data "<<endl;
   int c=(n+1)/2; int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
    for(int i=0; i<n; i++){
        insertAtTail(head ,arr[i]);
    }
    display(head);
     cout<<"enter key  "<<endl;
    int key; cin >>key;
    insertAtMiddle(head ,key,c);
      display(head);
     return 0;
}
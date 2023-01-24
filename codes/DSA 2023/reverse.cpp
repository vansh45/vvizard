#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int value){
        next = NULL;
        data = value;
    }
};
void insert_at_tail(node*&head, int value){
    node * n = new node(value);
 if(head == NULL){
    head =n;
    return;
 }
 node * temp = head;
 while(temp->next !=NULL){
    temp =temp->next;
 }
 temp->next = n;

}
void insert_at_head(node*&head, int value){
      node * n = new node(value);
 if(head == NULL){
    head =n;
    return;
 }
  n->next = head;
  head = n;
}
void display(node * temp ){
     while(temp != NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}
void reverse(node*&head){
    node*prev = NULL;
    node*current =head;
    node*coming = NULL;
   
    while(current !=NULL){
    coming = current->next;
    current->next =prev;
    prev = current;
    current = coming;
    
    }
    
    
    
    head = prev;
    
}
int main(){
    node * head =NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    insert_at_tail(head, 7);
    insert_at_tail(head, 8);
    
    insert_at_head(head , 0);
    display(head);
    reverse(head);
    display(head);
     return 0;
}
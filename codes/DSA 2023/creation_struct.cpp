#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
   
    int data;
    struct node* next;

   
};

void insert_at_tail(struct node ** head,int value)
{
 struct node *n = malloc(sizeof(struct node));
  if(head == NULL){
  head = n; return;
  }
  
  node * temp= head;
  while(temp->next != NULL){
    temp = temp-> next;
  }
  temp ->next = n;
}

void insert_at_head(node *&head, int value){
node * n = new node(value);
if(head == NULL){
  head = n; return;
  }
  
  n->next = head;
  head = n;
}

void display(node * temp){
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

    node * head =NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    display(head);
    insert_at_tail(head,5);
    insert_at_head(head,0);
    display(head);
    return 0;
}
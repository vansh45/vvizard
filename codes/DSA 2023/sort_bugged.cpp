#include <iostream>
using namespace std;
class node{
    public:
  int data; 
  node * next;
  node(int value ){
    data = value;
    next = NULL;
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
int count_items(node*&head){
    node*temp =head; int count=1;
    while(temp->next!= NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

node* sorted(node *&head){
   
    node* dummy = new node(-1);
    node* temp99 = dummy;
    node* temp = head;
    
    int min = 999;

  for(int j=0; j<count_items(head); j++)  {
    while(temp->next != NULL){
         if(min > temp->data){
        min = temp->data;
      }

      temp = temp->next;
    }

    if(head == NULL){
        return dummy->next;
    }

    if(min == head->data){
        temp99 ->next = head; ///
        head = head->next;
        temp99 = temp99->next;
    }

   while ( temp->next->data !=min){
    temp = temp->next;
   }
    node *mark = temp->next;
    temp->next = temp->next->next;
    temp99 ->next =mark;
    temp99 = temp99->next;}
    
    return dummy->next;
}



int main(){
    node * head =NULL;
    
    insert_at_tail(head, 10);
    insert_at_tail(head, 2);
    insert_at_tail(head, 300);
    insert_at_tail(head, 4);
    insert_at_tail(head, 55);
    insert_at_tail(head, 16);
    insert_at_tail(head, 7);
    insert_at_tail(head, 8);
    
    insert_at_head(head , 0);
    display(head);
   

    node * head1 =sorted(head);
    
    display(head1);
     cout<<"jgg";
     return 0;
}
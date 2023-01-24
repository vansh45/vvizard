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

void deletion_at_head(node*&head){
    node*dval = head;
    head = head->next;
    delete dval;
}
void deletion_by_value(node*&head, int value){
    if(value == head->data){
        deletion_at_head(head);
        return;
    }
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deletion_at_head(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!= value){
        temp = temp->next;
    }
    node* dval = temp->next;
    temp->next = temp->next->next;
    delete dval;
}

int count_items(node*&head){
    int count = 1; node *temp = head;
    while(temp != NULL){
        temp=temp->next;
        count++; 
    }
    return count;
}

void deletion_by_position(node*&head, int position){
    
    if(head == NULL || position == 0 || abs(position) >= count_items(head)){
        return;
    }
    if(position <0){
       position = count_items(head) + position;
    }
    if(position ==1){
        deletion_at_head(head); return;
    }
    
    node* temp = head;
    int pos =1;
    
    while(temp != NULL&& pos+1 !=position){
        temp=temp->next;
        pos++; 
    }
        
             node* dval = temp->next;
             temp->next = temp->next->next;
             delete dval;
             return;
        
    
}


void remove_duplicate(node*&head){
    
    for(int i =0; i<3; i++){
        node* temp = head;
    while(temp->next!=NULL && temp->data != temp->next->data){
  temp = temp->next;
    }
    deletion_by_value(head,temp->data);
    // return;
    }

}
int main(){
    node * head =NULL;
    
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 4);
    insert_at_tail(head, 7);
    insert_at_tail(head, 8);
    

    display(head);
 
    remove_duplicate(head);
    display(head);
    //cout<<"   "<<endl<<head->data;
     return 0;
}
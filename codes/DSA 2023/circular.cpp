#include <iostream>
using namespace std;
class node {
public :
int data;
node *next;
node(int value){
    next = NULL; 
    data = value;
}
};

void insert_at_tail(node * &head,int value){
  node* n = new node(value);
  if(head == NULL){
  head = n; return;
  }
  
  node * temp= head;
  while(temp->next != NULL){
    temp = temp-> next;
  }
  temp ->next = n;
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

bool detect_cycle(node*&head){
    node*fast = head;
    node*slow = head;
    
    while(fast!=NULL&&fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            cout<<endl<<"cycleeee  ";
        return true;
        
        }
        
    }
    return false;
    cout<<" "<<endl;
}


void remove_cycle(node*&head){
    node*fast = head;
    node*slow = head;
    
    do{
        fast = fast->next->next;
        slow = slow->next;
}while(fast!=slow);
fast = head;
while(fast->next!=slow->next){
    fast= fast->next;
    slow= slow->next;
}
slow->next= NULL;
}


void circular(node*&head, int position){
    node *temp =head;
    node *y =head;
    int pos =1;
    while(y->next!=NULL && pos!= position ){
        y = y->next;
        pos++;
    }
    while(temp ->next!= NULL ){
        temp = temp->next;
        
    }
      temp->next = y;

}

void display(node * temp){
    int count = 0;
    while(temp != NULL && count!=30){
        cout<<temp->data<<"->";
        temp = temp->next;
        count ++;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node * head =NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    insert_at_tail(head,7);
    insert_at_tail(head,8);
    insert_at_tail(head,9);
    
    display(head);
    circular(head,3);
    display(head);
   
    deletion_by_value(head,4);
    display(head);
    cout<<detect_cycle(head)<<endl;
    remove_cycle(head);
    display(head);
     return 0;
}
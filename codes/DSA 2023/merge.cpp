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
node* merge(node*&head1 , node*&head2){
node *dummy = new node(-1);
node *temp1 = head1;
node *temp2 = head2;
node *temp3 = dummy;

while(temp1!=NULL && temp2!= NULL ){
     if(temp1->data > temp2->data){
        temp3->next =temp2;
        temp2=temp2->next;
     }
     else{
        temp3->next = temp1;
        temp1=temp1->next;

     }
     temp3 = temp3->next;
}
while(temp1!=NULL){
     temp3->next =temp1;
     temp1=temp1->next;
     temp3 = temp3->next;
}
while(temp2!=NULL){
     temp3->next =temp2;
     temp2=temp2->next;
     temp3 = temp3->next;
}


return dummy->next;
}


int main(){
    node * head1 =NULL;
    node * head2 =NULL;
    insert_at_tail(head1, 2);
    insert_at_tail(head1, 4);
    insert_at_tail(head1, 5);
    insert_at_tail(head1, 7);
    insert_at_tail(head2, 1);
    insert_at_tail(head2, 3);
    insert_at_tail(head2, 6);
    insert_at_tail(head2, 8);
    insert_at_tail(head2, 9);
    
    insert_at_head(head2 , 0);
    display(head1);
    display(head2);
    cout<<"merged"<<endl;
    
    node * head =merge(head1,head2);
    display(head);
     return 0;
}
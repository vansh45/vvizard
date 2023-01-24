#include <iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
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
void intersection(node* &head1, node*&head2, int position){
 node* temp =head1;
 node *temp2 = head2;
 int pos=1;
 while(temp->next!=NULL && pos!=position){
 temp = temp->next;
 pos++;
 }
 while(temp2->next!=NULL ){
 temp2 = temp2->next;
 }
 temp2->next = temp;
}
int find_intersection(node*&head1, node*&head2){
 node* temp =head1;
 node *temp2 = head2;
 int length1 =0;
 int length2 =0;
 int pos =0;
 while(temp->next!=NULL){
 temp = temp->next;
 length1++;
 }
 while(temp2->next!=NULL ){
 temp2 = temp2->next;
 length2++;
 }
 int x = length1-length2;


 temp = head1;
 temp2 =head2;

 while(temp->next!=NULL && x){
 temp = temp->next;
 x--;
 }
 while(temp2->next!=NULL && temp->next!= NULL){
 temp2 = temp2->next;
 temp = temp->next;
 
 if(temp == temp2){
    return temp->data;
 }
 else {return -1;}
 }
}
int main(){

    node * head1 =NULL;
    node * head2 =NULL;
    insert_at_tail(head1,1);
    insert_at_tail(head1,2);
    insert_at_tail(head1,3);
    insert_at_tail(head1,4);
    insert_at_tail(head1,5);
    insert_at_tail(head1,6);

    insert_at_tail(head2,9);
    insert_at_tail(head2,10);

    intersection(head1,head2,5);
    display(head1);
    display(head2);
    cout<<find_intersection(head1,head2);
    return 0;
}
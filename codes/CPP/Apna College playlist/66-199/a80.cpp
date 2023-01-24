 // merging 2 ll 
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
// like merging sorted arrays 
node* merge( node* &head1, node* &head2){
    node* p1= head1;
    node* p2 = head2;
    node* dummynode= new node(-1);
    node* p3 = dummynode;

// p1p2p3 are ptrs but dummynode is a new node

 while( p1!=NULL && p2!= NULL){
     if(p1->data<p2->data){
         p3->next=p1;
         p1=p1->next;
     }
     else{
         p3->next=p2;
         p2=p2->next;
     }
     p3=p3->next;
 }
    while(p1!= NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
     while(p1!= NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
 }
 node* mergerecursive(node* &head1, node* &head2){
if(head1==NULL){
    return head2;
}
if(head2==NULL){
    return head1;
}
node* result;
if(head1->data< head2->data){
    result=head1;
     result->next=mergerecursive(head1->next, head2);   
}
else{
    result= head2;
    result->next=mergerecursive(head1,head2->next);
}
return result;
 }
 


int main(){
    node* head1 = NULL;
    node* head2 = NULL;
  int arr1[] ={1,4,5,7};
  int arr2[] ={2,3,6};
   for(int i=0; i<4; i++){
       insertAtTail(head1,arr1[i]);
   }
   for(int i=0; i<3; i++){
       insertAtTail(head2,arr2[i]);
   }
    
    display(head1);
    display(head2);
 // node* newhead = merge(head1, head2);
  node* newhead = mergerecursive(head1, head2);
  display(newhead);
     return 0;
}
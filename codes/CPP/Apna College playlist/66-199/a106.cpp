// traversal in bt
 /*
              1
            /   \
           2     3
          / \   / \
         4   5 6   7

preorder: 1,2,4,5,3,6,7
(root->print then left subtree-> left->left... then right )

inorder:  4,2,5,1,6,3,7
(root-> left subtree-> left->left...print than back
to subroot ->print  then right subtree)

postorder: 4,5,2,6,7,3,1
(root-> left subtree-> left->left...print than 
right->left... right ..  backprint ) 
 */  
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
};

void preorder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root-> left);
    preorder(root-> right);
}

void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root == NULL){
        return;
    }
    postorder(root-> left);
    postorder(root-> right);
     cout<<root->data<<" ";
}

int main(){
     struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<"preorder : "<<endl;
    preorder(root); cout<<endl;
    cout<<"inorder : "<<endl;
    inorder(root);  cout<<endl;
    cout<<"postorder : "<<endl;
    postorder(root); cout<<endl; 
     return 0;
}
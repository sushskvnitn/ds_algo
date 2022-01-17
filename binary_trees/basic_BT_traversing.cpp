#include <bits/stdc++.h>
using namespace std ;

struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

//print inorder 
void inorder(Node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//print preorder
void preorder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//print postorder
void postorder(Node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){ 

    /*      5
          /  \
         3    6   this is also a binary search tree 
       /  \ 
     2     4    */

   struct  Node* root = new Node(5);
   root->left =new Node(3);
   root->right =new Node(6);
   root->left->right =new Node(4);
   root->left->left =new Node(2);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
 return 0;
}
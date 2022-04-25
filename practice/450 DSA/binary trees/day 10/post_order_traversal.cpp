//day 10 

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

void printpost(Node * root){
    if(root==NULL){
        return;
    }
    
    printpost(root->left);
    printpost(root->right);
     cout<<root->data<<" ";
}
int main(){ 


   struct  Node* root = new Node(5);
   root->left =new Node(3);
   root->right =new Node(6);
   root->left->right =new Node(4);
   root->left->left =new Node(2);
   printpost(root);
 return 0;
}
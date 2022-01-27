//here root data is added with childrens data and build a tree 

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
void printinorder(Node * root){
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}

// sum replace function 
void sumreplace (Node* root){
    if(root==NULL){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left!=NULL){
        root->data += root->left->data; 
    }
    if(root->right!=NULL){
        root->data += root->right->data; 
    }
}


int main(){ 

    /*      5                                      20
          /  \     after sum replace             /   \
         3    6                   =>            9      6
       /  \                                   /   \
     2     4                                 2     4*/

   struct  Node* root = new Node(5);
   root->left =new Node(3);
   root->right =new Node(6);
   root->left->right =new Node(4);
   root->left->left =new Node(2);
   printinorder(root);
   cout <<endl;
   sumreplace(root);
   printinorder(root);

 return 0;
}
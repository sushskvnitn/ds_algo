#include <bits/stdc++.h>
using namespace std;
class node {
      public:
      int data;
      node* left;
      node *right;
      node(int val){
            data= val;
            left =NULL;
            right =NULL;
      }
};

node * insert(node *root,int val){
      if(root ==NULL){
            return new node(val);
      }
      if(root->data <val){
            root->right = insert(root->right,val);
      }else{
            root->left = insert(root->left,val);
      }
      return root;
}

bool check(node *root){
      if(root ==NULL){return true;}
      if(root->right!=NULL&& root->data > root->right->data  ){
            return false;
      }
      else if( root->left!=NULL && root->data < root->left->data){
            return false;
      }
      bool left,right;
          left=  check(root->left);
          right =  check(root->right);
      return left && right;
}


void inorder(node *root){
      if(root ==NULL){return;}
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
}

int main()
{  
      node *root = new node(5);
      insert(root,2);
      insert(root,3);
      insert(root,4);
      insert(root,6);
      inorder(root);
      cout<<endl<< "check for bst : " << check(root);
      return 0;
}
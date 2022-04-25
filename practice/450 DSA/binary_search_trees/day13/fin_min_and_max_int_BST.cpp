#include <bits/stdc++.h>
using namespace std;

class node{
      public:
      int data;
      node * left;
      node * right;
      node(int val){
            data = val;
            left =NULL;
            right =NULL;
      }
};

node* insert(node *root,int val){
      if(root == NULL){
            return new node(val);
      }
      if(root->data < val ){
          root->right =  insert(root->right,val);
      }else{
        root->left = insert(root->left,val);

      }
      return root;
}
void inorder(node *root){
      if(root==NULL) return ;
      inorder(root->left);
      cout<<root->data<<endl;
      inorder(root->right);
}
void  max(node *root){
      if(root==NULL) return ;
      while(root->right!=NULL){
            root= root->right;
      }
      cout<<"max: " <<root->data<<endl;
      
      }
      void min(node *root){
            if(root==NULL) return ;
            while(root->left!=NULL){
            root= root->left;
      }
      cout<<"min:"<< root->data<<endl;
      }

int main()
{     node * root = new node(2);
insert(root,1);
insert(root,2);
insert(root,3);
max(root);
min(root);
      return 0;
}
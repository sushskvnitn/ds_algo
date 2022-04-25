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


void inorder(node *root){
      if(root ==NULL){return;}
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
}

node *inordersuccesor(node *root){
      node * curr = root;
      while(curr&& curr->left!=NULL){
            curr=curr->left;
      }
      return curr;
}


node * deleteinBST(node *root,int data){
      if(root ==NULL){return root;}
      if(data < root->data){
            root->left =deleteinBST(root->left,data);
      }else if(data > root->data){
            root->right =deleteinBST(root->right,data);
      }
      else{
            //here root->data == data
            if(root->left==NULL){
                  node * temp = root->right;
                  delete root;
                  return temp;
            }else if(root->right==NULL){
                  node * temp = root->left;
                  delete root;
                  return temp;
            }else{
                  node * temp = inordersuccesor(root->right);
                  root->data = temp->data;
                  root->right =deleteinBST(root->right,temp->data);
            }
            return root;
      }
}

int main()
{  
      node *root = new node(5);
      insert(root,2);
      insert(root,3);
      insert(root,4);
      insert(root,6);
      inorder(root);
      cout<<endl;
      deleteinBST(root,3);
      inorder(root);
      return 0;
}
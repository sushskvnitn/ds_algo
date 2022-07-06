#include <bits/stdc++.h>
using namespace std;
class node { public:
      int data;
      node* left;
      node* right;
     
      node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
      }
};
int height( node* root){
       if(root==NULL){
             return 0;
       }
       int lh=height(root->left);
       int rh=height(root->right);
       return max(lh, rh)+1;
}
int main()
{
      node * root = new node(1);
      root->left = new node(2);
      root->right = new node(3);
      root->left->left = new node(4);
       root->left->right = new node(4);
      cout<<height(root);
      return 0;
}
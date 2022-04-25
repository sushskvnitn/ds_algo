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
node *searchinbst(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    // data > key
    if (root->data > key)
    {
        return searchinbst(root->left, key);
    }
    return searchinbst(root->right, key);
}

int main()
{     node * root = new node(5);
insert(root,1);
insert(root,2);
insert(root,3);
inorder(root);
node *temp = searchinbst(root, 3);
    cout << temp->data<<endl;
      return 0;
}
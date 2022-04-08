///AVL TREES IMPLEMENTATION
#include <bits/stdc++.h>
using namespace std;

struct node{
      int key;
      node *left, *right;
      int height;
};
int getheight(struct node *root){
      if(root==NULL)
            return 0;
      return root->height;
}
int max(int a, int b){
      return (a>b)?a:b;
}
struct node *newnode(int key){
      struct node *temp = new node;
      temp->key = key;
      temp->left = temp->right = NULL;
      temp->height = 1;
      return temp;
}
int getBalanceFactor(struct node *root){
      if(root==NULL)
            return 0;
      return getheight(root->left) - getheight(root->right);
}

struct node * rightrotate(struct node *y){
      struct node * x= y->left;
      struct node * t2= x->right;
      x->right = y;
      y->left = t2;
      y->height = max(getheight(y->left), getheight(y->right)) + 1;
      x->height = max(getheight(x->left), getheight(x->right)) + 1;
      return x;

}

struct node * leftrotate(struct node *x){
      struct node * y= x->right;
      struct node * t2= y->left;
      y->left = x;
      x->right = t2;
      x->height = max(getheight(x->left), getheight(x->right)) + 1;
      y->height = max(getheight(y->left), getheight(y->right)) + 1;
      return y;
}
struct node * insert(struct node * root,int key){
      if(root==NULL)
            return newnode(key);
      if(key < root->key)
            root->left = insert(root->left, key);
      else if(key > root->key)
            root->right = insert(root->right, key);
      else
            return root;


      root->height = max(getheight(root->left), getheight(root->right)) + 1;


      int balanceFactor = getBalanceFactor(root);
      //left left case 
      if(balanceFactor > 1 && key < root->left->key)
            return rightrotate(root);
      //right right case
      if(balanceFactor < -1 && key > root->right->key)
            return leftrotate(root);
      //left right case
      if(balanceFactor > 1 && key > root->left->key){
            root->left = leftrotate(root->left);
            return rightrotate(root);
      }
      //right left case
      if(balanceFactor < -1 && key < root->right->key){
            root->right = rightrotate(root->right);
            return leftrotate(root);
      }
      return root;
}
void preorder(struct node *root){
      if(root!=NULL){
            cout<<root->key<<" ";
            preorder(root->left);
            preorder(root->right);
      }
}

int main()
{

      struct node *root = NULL;
      root = insert(root, 10);
      root = insert(root, 20);

      root = insert(root, 30);
      root = insert(root, 40);
      root = insert(root, 50);
      root = insert(root, 25);
      root = insert(root, 35);
      root = insert(root, 60);
      root = insert(root, 70);
      preorder(root);
      return 0;
}
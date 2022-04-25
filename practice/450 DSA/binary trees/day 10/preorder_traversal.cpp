//day 10 

#include <bits/stdc++.h>
using namespace std ;

class node{
    public:
    int data;
    node * right;
    node * left;
    node(int val){
        data =val;
        right = NULL;
        left =NULL;
    }
};

void printpreorder(node* root ){
    if(root==NULL){
        return;
    }
     cout<< root->data << "  ";
    printpreorder(root->left);
    printpreorder(root->right);
   
}

int main(){ 
     node * root = new node(1);
    root->right = new node(3);
    root->left = new node(2);
    root->left->right = new node(4);
    root->left->left = new node(5);
    printpreorder(root);
 return 0;
}
//day 10 

#include <bits/stdc++.h>
using namespace std ;

class node {
    public:
    int data;
    node * right;node* left;
    node(int val){
        data = val;
        right =NULL;
        left =NULL;
    }
};
//recursive 
void printinorder(node* root){
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<< root->data<< "  ";
    printinorder(root->right);

}



int main(){ 
    node * root = new node(1);
    root->right = new node(3);
    root->left = new node(2);
    root->left->right = new node(4);
    root->left->left = new node(5);
    printinorder(root);
 return 0;
}
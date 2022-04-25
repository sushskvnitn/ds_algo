//day 10 
#include <bits/stdc++.h>
using namespace std ;
 class node {
     public:
     int data;
     node * right;
     node * left;
     node(int val ){
         data = val;
         right =NULL;
         left =NULL;
     }
 };


 void levelorder(node * root){
     if(root==NULL){
         return;
     }
     queue <node *> q;
     q.push(root);
     q.push(NULL);
    while(!q.empty()){
        node * temp = q.front();
        q.pop();
        if(temp!=NULL){
            cout<< temp->data<< " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
 }

 
int main(){ 


     node* root = new node(5);
   root->left =new node(3);
   root->right =new node(6);
   root->left->right =new node(4);
   root->left->left =new node(2);
 levelorder(root);
 return 0;
}
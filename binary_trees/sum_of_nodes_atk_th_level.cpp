//algorithm : do levelorder traversal by maintaining one level pointer 

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

int sumatk(Node* root,int k){
    if(root==NULL){
        return -1;
    }
    // creating node 
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    int level =0; // to keep track of level 
    int sum =0; //for sum at level k 
    while(!q.empty()){
        Node * node  = q.front();
        q.pop();

        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}




//print inorder 
void printinorder(Node * root){
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}
int main(){ 

    /*      5
          /  \
         3    6   this is also a binary search tree 
       /  \ 
     2     4    */

   struct  Node* root = new Node(5);
   root->left =new Node(3);
   root->right =new Node(6);
   root->left->right =new Node(4);
   root->left->left =new Node(2);
    cout << sumatk(root,2);
   
 return 0;
}

//output: 6
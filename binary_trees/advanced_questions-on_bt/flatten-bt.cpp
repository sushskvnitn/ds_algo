/*
 strategy : 
    1> recursively ,flatten left and right subtree 
    2> store left and right tail 
    3> store right subtree in temp and make left subtree as right subtree
    4> join right subtree with left tail 
    5> return right tail 
    returning tail because when we are flattening subtrees and if we get right tail 
    from there then we can use it to flatten 
*/

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
//flatten a bt
void flatten(Node * root){
    if(root==NULL || (root->left==NULL && root->right ==NULL)){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        //after flattening store it into temp
        Node * temp = root->right;
        root->right = root->left;
        root->left =NULL;

        Node* t =root->right;
        while(t->right!=NULL){
            t =t->right;

        }
        t->right = temp;  
    }
    flatten(root->right);
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
   printinorder(root); // 2 3 4 5 6 
   cout<<endl;
    flatten(root); 
   printinorder(root);// 5 3 2 4 6
 return 0;
}

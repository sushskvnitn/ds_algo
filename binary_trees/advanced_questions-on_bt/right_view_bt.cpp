/*  intuition :  go level wise and print rightmost value  */

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//right view of binary tree 

void rightview(Node * root){
    if(root==NULL){
        return;
    }
    //construct node with node pointers 
    queue < Node *> q;
    q.push(root);
    //run queue untill it gets empty 
    while(!q.empty()){
        /* here insted of adding NULL we will find size of queue
         to calculate no of nodes stored in curr level */
         int n =q.size();
         for(int i=0 ; i<n ;i++){
             Node * curr = q.front();
             q.pop();
             if(i==n-1){
                 cout<< curr->data << " " ;
             }
             if(curr->left!=NULL){
                 q.push(curr->left);
             }
             if(curr->right!=NULL){
                 q.push(curr->right);
             }
         }
    }
}


// print inorder
void printinorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printinorder(root->left);
    cout << root->data << " ";
    printinorder(root->right);
}
int main()
{

    /*      5
          /  \
         3    6   this is also a binary search tree
       /  \
     2     4    */

    struct Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->right = new Node(4);
    root->left->left = new Node(2);
    rightview(root);
    return 0;
}
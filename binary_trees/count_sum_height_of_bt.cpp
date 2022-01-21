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

//count all nodes
int countnode ( Node *  root){
    if(root == NULL){
        return 0;
    }
    return countnode(root->left)+countnode(root->right)+1;
}

//sum of all nodes of bt
int sumnodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumnodes(root->left)+sumnodes(root->right)+ root->data;
}
//height of bt: it is the depth of tree's deepest node 
int calcheight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = calcheight(root->left);
    int rheight = calcheight(root->right);
    return max(lheight,rheight)+1;
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
   cout <<sumnodes(root)<<endl;
   cout <<countnode(root)<<endl;
  cout << calcheight(root)<<endl;
 return 0;
}



// output:20
// 5
// 3
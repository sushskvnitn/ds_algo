/*intuituion : 
   for each node ,the diff between heights of the left subtree and right subtree < = 1  */

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
// height of bt
int height(Node * root ){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}


 //isbalanced function 
 bool isbalanced(Node * root){
     if (root == NULL ){
       return true ;
     }
     if(isbalanced(root->left)==false){
         return false;
     }
     if(isbalanced(root->right)==false){
         return false;
     }
     //now for current node 
     int lh = height(root->left);
     int rh = height(root->right);
     if(abs(lh-rh) <=1){
         return true;
     }else{
         return false;
     }
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
     2     4    
    /               
  1                   */

   struct  Node* root = new Node(5);
   root->left =new Node(3);
   root->right =new Node(6);
   root->left->right =new Node(4);
   root->left->left =new Node(2);
   root->left->left->left =new Node(1);
   if(isbalanced(root)){
       cout <<"balanced"<<endl;
   }else{
       cout <<"unbalanced"<<endl;
   }
 return 0;
}

 //note :: for tc you can use height tc for time complexity
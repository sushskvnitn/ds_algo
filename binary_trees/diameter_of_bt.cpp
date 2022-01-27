// diameter  : no of nodes in longest path between any 2 leaves 


// algorithm:
// if daimeter through node then dia = left height + right hright + 1 
// if not then max of left height  + right height 


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
 

 //calculate height 
  /*
  int calculateheight(Node * root){
     if(root == NULL){
         return 0;
     }
     return max(calculateheight(root->left),calculateheight(root->right))+1;
 }

 int calcdiameter(Node* root){
     if(root==NULL){
         return 0;
        
     }
     int lheight = calculateheight(root->left);
     int rheight =calculateheight(root->right);
     int currdiameter = lheight + rheight +1 ;
     int ldiameter =calcdiameter(root->left);
     int rdiameter = calcdiameter(root->right);
     return max(currdiameter,max(ldiameter,rdiameter));
 }
this has o( N * N ) complexity we can calculate height inside calc height and redule tc 
 */
int calcdiameter(Node* root,int *height){
     if(root==NULL){
         *height=0;
         return 0;
        
     }
     int lheight = 0;
     int rheight =0;
     
     int ldiameter =calcdiameter(root->left,&lheight);
     int rdiameter = calcdiameter(root->right,&rheight);
     int currdiameter = lheight + rheight +1 ;
     *height =max(lheight,rheight) +1 ;
     return max(currdiameter,max(ldiameter,rdiameter));
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
   int height=0;
   cout <<   calcdiameter(root,&height);
 return 0;
}
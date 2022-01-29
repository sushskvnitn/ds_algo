/*
strategy: 
for each node store following data :
1> min in subtree 2> max in subtree 
3> subtree size 4> size of largest bst
5> is bst
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

struct info{
    int size;int max;int min;
    int ans;
    bool isbst;
};

//function 
info largestinbst(Node * root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left == NULL&& root->right==NULL){
        return {1,root->data,root->data,1,true};
    }
    info leftinfo =largestinbst(root->left);
    info rightinfo =largestinbst(root->right);
    info curr;
    curr.size=(1+leftinfo.size+rightinfo.size);
    if(leftinfo.isbst&& rightinfo.isbst && leftinfo.max <root->data&& rightinfo.min > root->data){
        //here bst is created for curr node 
        curr.min = min (leftinfo.min,min(rightinfo.min,root->data));
        curr.max = max (leftinfo.max,max(rightinfo.max,root->data));
        curr.ans =curr.size;
        curr.isbst =true;
        return curr;
    }//if not a bst 
    curr.ans = max(leftinfo.ans,rightinfo.ans);
    curr.isbst =false;
    return curr;
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

    /*      15
          /  \
         20    30   this is also a binary search tree 
       /  \ 
     5     25  */

   struct  Node* root = new Node(15);
   root->left =new Node(20);
   root->right =new Node(30);
   root->left->right =new Node(25);
   root->left->left =new Node(5);

   cout<< " largest bst in bt "<< largestinbst(root).ans <<endl;

 return 0;
}

//output : largest bst in bt 3
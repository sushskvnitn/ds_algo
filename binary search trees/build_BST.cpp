#include <bits/stdc++.h>
using namespace std ;

struct node {
    int data;
    node *left,*right ;
    node(int val){
        data =val;
        left =NULL;
        right =NULL;
    }
};

node * insertBST(node * root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left,val);
    }else{
        //val > root->data
        root->right = insertBST(root->right,val);
    }
    return root;
}
void printinorder(node * root){
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}
int main(){ 
node * root =NULL ;
root = insertBST(root,5);
insertBST(root,1);
insertBST(root,3);
insertBST(root,6);
insertBST(root,9);
insertBST(root,0);
insertBST(root,2);
printinorder(root);
 return 0;
}
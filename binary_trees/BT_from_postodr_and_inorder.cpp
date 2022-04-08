// algorithm:
// 1> start fromend of postorder and pick element to create a Node
// 2> decrement postorder index 
// 3> search for picked element position in inorder
// 4> call to build right subtreee from inorder pos+1 to n 
//5> call to build left subtreee from inorder 0 to pos-1


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
// search in inorder 
int search(int inorder[],int start,int end,int curr){
 //start and end are of inorder and curr is of prev order 
  for(int i =start;i<=end;i++){
      if(inorder[i]==curr){
          return i;
      }
  }
    return -1;
}

//building a tree 
Node *buildtree(int postorder[],int inorder[],int start,int end){
    static int idx =4;
    //base condition 
    if(start > end){
        return NULL;
    }
    int curr  = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    //for 1 element tree
    if(start ==end){
        return node;
    }
    //pos - for position in inorder 
    int pos = search(inorder,start,end,curr);

    node->right= buildtree(postorder,inorder,pos+1,end);
    node->left= buildtree(postorder,inorder,start,pos-1);
    return node;
}
//print inorder 
void prinorder(Node * root){
    if(root==NULL){
        return;
    }
    prinorder(root->left);
    cout<<root->data<<" ";
    prinorder(root->right);
}
int main(){ 

int postorder[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};
Node *root = buildtree(postorder,inorder,0,4);
prinorder(root);
 return 0;

 return 0;
}
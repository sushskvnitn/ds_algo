// algorithm:
       /*   1     in binary search tree ,we do add root in queue and the null so it 
          /  \    will look like [1] [NULL ] now we remove root [1]and check root [1]
         2    3    have childern or not if  ithave then create a new level by adding 
       /  \       them to queue and [null] after it .so queue look like [2][3][NULL] 
     4     5    then remove 2 and check for childrens do like this you will get a level */


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

// print level order
void printlevelorder(Node* root){
    if(root==NULL){
        return;
    }
    //create a queue 
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front() ;
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int main(){ 


   struct  Node* root = new Node(1);
   root->left =new Node(2);
   root->right =new Node(3);
   root->left->right =new Node(5);
   root->left->left =new Node(4);
    printlevelorder(root);
 return 0;
}
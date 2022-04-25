#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
      public:
      int data;
      Node* left;
      Node* right;
      Node(int val){
            data = val;
            left = NULL;
            right =NULL;
      }
};

int height(Node* node)
{
      if(node==NULL){
            return 0;
        }
      int l = height( node->left);
      int r = height (node ->right);
      return max(l,r)+1;
}
int main(){
      Node* root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
       cout << height(root);
    
}



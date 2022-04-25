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
vector<int> reverseLevelOrder(Node *root)
{   
  
    vector <int > v;
    queue < Node * >q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
       Node * temp = q.front() ;
       q.pop();
       if(temp!=NULL){
           v.push_back(temp->data);
           q.push(temp->right);
           q.push(temp->left);
           
       }
    }
    reverse(v.begin(),v.end());
    return v ;
    
}

int main(){
      Node* root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
        vector<int> result = reverseLevelOrder(root);
        for (int i = 0; i < result.size(); ++i)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    
}

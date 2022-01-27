// maximum possible sum of a path in a binary tree starting and ending at any node 

/* strategy :
   for each nnode compute 
   1> node val 
   2> max path through left child + node val
   3> max path through right child + node val
   4> max path throught left child + max path through right child + node val
   comparing all 4 we get maximum sum 
   
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

  //maximum  path sum 
/* here we use one function maxpathsum util which is 
going to calculate max at node considering all 4 cases above */
int maxpathsumutil(Node * root,int  &ans ){
    if(root == NULL){
        return 0;
    }
    int left = maxpathsumutil(root->left,ans);
    int right =maxpathsumutil(root->right,ans);
    int nodemax = max(max(root->data,root->data + left +right), max(root->data + left,root->data+ right));
      ans  = max(ans,nodemax);
    int singlepathsum = max(root->data,max(root->data + left ,root->data + right));
    return singlepathsum;
}

int maxsumpath(Node * root){
    int ans = -1000;
   maxpathsumutil(root,ans);
    return ans;
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
  
      /*      1
            /  \
           2    3   
         /  \ 
       4     5    */
     struct  Node* root = new Node(1);
     root->left =new Node(2);
     root->right =new Node(3);
     root->left->right =new Node(5);
     root->left->left =new Node(4);
    cout << maxsumpath(root);
   return 0;
  }
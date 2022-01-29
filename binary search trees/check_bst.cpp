/* approch :
   find max of left subtree and min of rigth subtree and compare node > maxl node < minr
 optimized approch : 
        traverse nodes once 
        create two max and min allowed variables 
               node (min,max)
           /                 \
        left(min,node)    right(node,max)

 */ 
 


#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val; 
        left = NULL;
        right = NULL;
    }
};

node *insertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        // val > root->data
        root->right = insertBST(root->right, val);
    }
    return root;
}

//check bst 
bool isvalid(node* root,node * min =NULL,node * max =NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <=min->data){
        return false;//as root->data > min->data
    }
    if(max!=NULL&& root->data >=max->data){
        return false;//as max data > root data
    }
    bool leftvalid = isvalid(root->left,min,root);
    bool rightvalid = isvalid(root->right,root,max);
    return leftvalid and rightvalid;
}

void printinorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printinorder(root->left);
    cout << root->data << " ";
    printinorder(root->right);
}
int main()
{
    node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);
    insertBST(root, 9);
    insertBST(root, 0);
    insertBST(root, 2);
    printinorder(root);
   cout<<endl<< isvalid(root);
    return 0;
}
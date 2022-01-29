/*
strategy :
        1> make middle element the root 
        2> recursively do the same for subtrees 
                a>start to mid-1  for left subtree
                b> mid +1 to end for right subtree 



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
 
 //biuld bst
 node * sortedArraybst(int arr[],int start,int end){
     if(start > end){
         return NULL;
     }
     int mid = (start + end )/2;
     node * root = new node(arr[mid]);
     root->left = sortedArraybst(arr,start,mid-1);
     root->right = sortedArraybst(arr,mid+1,end);
     return root;
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
    int arr[]= { 10,20,30,40,50};
    node * root = sortedArraybst(arr,0,4);

    printinorder(root);
    
    return 0;
}
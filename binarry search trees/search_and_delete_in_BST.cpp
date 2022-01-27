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

node *searchinbst(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    // data > key
    if (root->data > key)
    {
        return searchinbst(root->left, key);
    }
    return searchinbst(root->right, key);
}
// inorder successor function

node *inordersucc(node *root)
{
    node *curr = root;
    while (curr &&curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

// delete function
/*
case1 : node is leaf
case 2: replace node with child and delete the node
case3: node has two childrens
        step1: find inorder successor
        step2 : replace with inorder successor

*/
node *deleteinbst(node *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteinbst(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteinbst(root->right, key);
    }
    else
    {
        // now we r on key = root->data
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        // case 3
        node *temp = inordersucc(root->right); // found successor root
        root->data = temp->data;
        root->right = deleteinbst(root->right, temp->data);
    }
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
    node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 6);
    insertBST(root, 9);
    insertBST(root, 0);
    insertBST(root, 2);
    printinorder(root);
    cout << endl;
    node *temp = searchinbst(root, 9);
    cout << temp->data<<endl;
    deleteinbst(root,5);
    printinorder(root);
    return 0;
}
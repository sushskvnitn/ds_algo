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
void printpreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printpreorder(root->left);
    printpreorder(root->right);
}

node* constructbst(int preorder[], int* preorderidx, int key, int min, int max, int n)
{
    if (*preorderidx > n)
    {
        return NULL;
    }
    // create a root
    node* root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preorderidx = *preorderidx + 1;
        if (*preorderidx < n)
        {
            root->left = constructbst(preorder, preorderidx, preorder[*preorderidx], min, key, n);
        }
        if (*preorderidx < n)
        {
        root->right = constructbst(preorder, preorderidx, preorder[*preorderidx], key, max, n);
         }
    
    }
return root;
}

int main()
{
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderidx = 0;
    node *root = constructbst(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX, n);
    printpreorder(root);
    return 0;
}
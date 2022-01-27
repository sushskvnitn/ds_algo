/* strategy :
    1> find lowest common ancestor
    2> find distance of n1(d1) and n2( d2) from lca
    3> return d1 + d2

 */

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        // for this level we will get our lca as root
        return root;
    }
    // if we don't get LCA
    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);

    if (left != NULL && right != NULL)
    {
        // this means that we had n1 and n2 in left and right og subtree ,so its lca is root
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL; // here we don't have LCA node
    }
    if (left != NULL)
    {
        return LCA(root->left, n1, n2);
    }
    return LCA(root->right, n1, n2);
}
int finddist(Node *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }
    int left = finddist(root->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return finddist(root->right, k, dist + 1);
}

int distbtwnodes(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);
    int d1 = finddist(lca, n1, 0);
    int d2 = finddist(lca, n2, 0);
    return d1 + d2;
}

// print inorder
void printinorder(Node *root)
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

    /*      5
          /  \
         3    6   this is also a binary search tree
       /  \
     2     4    */

    struct Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);
    root->left->right = new Node(4);
    root->left->left = new Node(2);
    cout << distbtwnodes(root, 2, 6) << endl;

    return 0;
}
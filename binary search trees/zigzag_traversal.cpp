/*       1
        / \
      2    3        so order will be like => 1 ,3,2,4,5
       \    \
        4     5
strategy:
       1>sue 2 stacks 1 for curr level and next level
       2> variable left to right ->for direction
       3> if left to right is true ,then push left child then right
          else push right child and then left

*/

#include <iostream>
#include <stack>
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

// zig zag traversal
void zigzagtraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> currlevel;
    stack<node *> nextlevel;
    bool leftoright = true;
    currlevel.push(root);
    while (!currlevel.empty())
    {

        node *temp = currlevel.top();

        currlevel.pop();

        if (temp)
        {
            cout << temp->data << " ";

            if (leftoright)
            {
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
            }
            else
            {
                // for traversing right to left
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
            }
        } // after traversing one level
        if (currlevel.empty())
        {
            leftoright = !leftoright;
            swap(currlevel, nextlevel);
        }
    }
}

int main()
{
    node *root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);

    zigzagtraversal(root);
    return 0;
}
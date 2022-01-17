#include <bits/stdc++.h>
using namespace std;
// creating linked list
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// insert at tail
void insertatail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
// insert atfter node
void insertafternode(node *&head, node * afternode, int val)
{
    node *n = new node(val);
        node *temp = head;
        while (temp->data != afternode->data)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
}

// print linked list
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    insertatail(head, 1);
    insertatail(head, 2);
    insertatail(head, 3);
    insertatail(head, 4);
    insertatail(head, 5);
    node * afternode = new node(2);
    insertafternode(head, afternode, 8);
    print(head);

    return 0;
}
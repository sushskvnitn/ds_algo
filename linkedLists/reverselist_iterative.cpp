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
    node *element = new node(val);
    if (head == NULL)
    {
        head = element;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = element;
}
// print linked list
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// reverse a linked lists
node* reverse (node *&head){
    node * currptr= head;
    node * prevptr = NULL;
    node * nextptr ;
    while(currptr != NULL){
        nextptr=currptr->next;
        currptr->next= prevptr;
        prevptr = currptr;
        currptr= nextptr;
    }
return prevptr;
}

int main()
{
    node *head = NULL;
    insertatail(head, 1);
    insertatail(head, 2);
    insertatail(head, 3);
    insertatail(head, 4);
    insertatail(head, 5);
    print(head);
    cout<<endl;
    node *newhead = reverse(head);
    print(newhead);
    return 0;
}
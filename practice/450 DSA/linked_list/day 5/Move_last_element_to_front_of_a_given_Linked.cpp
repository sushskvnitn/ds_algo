// day5
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
// print linked list
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
void movelast_to_front (node *  &head){
        if(head ==NULL){
            return;
        }
        node * temp=head;
        while(temp->next->next !=NULL){
            temp =temp->next;
        }
        node * newnode  = new node (temp->next->data);
         temp->next = NULL;
         newnode->next =head;
         head =newnode;
}
int main()
{
    node *head = NULL;
    insertatail(head,1);
    insertatail(head,2);
    insertatail(head,3);
    insertatail(head,4);
    insertatail(head,5);
    insertatail(head,6);
    print(head);
    movelast_to_front(head);
    print(head);
    return 0;
}
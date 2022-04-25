// day 4
//  reverse a list in recursive and iterative way

#include <bits/stdc++.h>
using namespace std;

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

void insert_at_end(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
 node* reverse_iterative(node * &head){
     node * prev = NULL;
     node * curr = head;
     node * next;
     while(curr!=NULL){
        next = curr->next;
        curr->next=prev;

         prev = curr;
         curr = next;
     }
     return prev;
 }
 node* reverse_recursive(node * &head){
     if(head==NULL||head->next==NULL){
         return head;
     }
    node * newhead= reverse_recursive(head->next);
    head->next->next = head;
    head->next=NULL;
    return newhead;

 }


int main()
{
    node *head = NULL;
    insert_at_end(head, 1);
    insert_at_end(head, 2);
    insert_at_end(head, 3);
    insert_at_end(head, 4);
    insert_at_end(head, 5);
    node* newhead= reverse_iterative(head);
    print(newhead);
    cout <<endl;
    node* recursive= reverse_recursive(newhead);
    print(recursive);
}

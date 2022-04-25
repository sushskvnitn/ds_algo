// day 4
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
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
node * reverse_k_node_group(node * &head,int k){
  
    node * prev = NULL;
    node * curr =head;
    node * next;int count =0;
    while(curr!=NULL&& count < k){
    next = curr->next;
    curr->next=prev;
    prev =curr;
    curr=next;
    count ++;
    }
    if(next!=NULL){
        head ->next= reverse_k_node_group(next,k);

    }
    return prev;
}



int main()
{
    node *head = NULL;
    insertatail(head ,1);
    insertatail(head ,2);
    insertatail(head ,3);
    insertatail(head ,4);
    insertatail(head ,5);
    print(head);
    node * newhead = reverse_k_node_group(head,4);
    print(newhead);
    return 0;
}
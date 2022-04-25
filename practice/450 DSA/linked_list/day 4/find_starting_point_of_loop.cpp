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
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void loopHere(node* head, node* tail, int position)
{
    if(position==0) return;
    
    node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}
void starting_node_of_loop(node* head){
    if(head ==NULL){
        return ;
    }
    node * slow=head;
    node * fast=head;
    do{
        slow=slow->next;
        fast =fast->next->next;

    }while(fast !=slow);
    fast =head;
    while(fast->next!=slow->next){
        slow = slow->next;
        fast = fast ->next;
    }
    cout <<fast->next->data<<endl;
}


int main()
{
    node *head = NULL;
    insertatail(head,1);
    insertatail(head,3);
    insertatail(head,4);
    insertatail(head,5);
    insertatail(head,2);

     node * temp= head;
     while(temp->next!=NULL){
         temp= temp->next;
     }
     node * tail = temp;
    loopHere(head,tail,2);
    starting_node_of_loop(head);
    return 0;
}
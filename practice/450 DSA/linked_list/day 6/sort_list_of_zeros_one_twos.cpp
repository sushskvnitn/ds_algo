// day 6
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
 node* segregate(node *head) {
        node* curr=head;
        node* dummy0= new node(0);
        node* zero=dummy0;
        node* dummy1 = new node(0);
        node* one=dummy1;
        node* dummy2 = new node(0);
        node* two=dummy2;
        while(curr!=NULL){
            if(curr->data == 0){
            node* temp0= new node(0);
            zero->next=temp0;
            zero=zero->next;
        }
        else if(curr->data==1){
             node* temp1= new node(1);
           one->next=temp1;
           one=one->next;
        }
        else{
            node* temp2= new node(2);
           two->next=temp2;
            two=two->next;
        }
       curr=curr->next;
        }
        node* ans=dummy0->next;
        if(dummy1->next!=NULL)
        {zero->next=dummy1->next;
            one->next=dummy2->next;
            two->next=NULL;
        }
        else
       { 
        zero->next=dummy2->next;
        two->next=NULL;
       }
        return ans;
    }

int main()
{
    node *head = NULL;
    insertatail(head,1);
    insertatail(head,2);
    insertatail(head,1);
    insertatail(head,2);
    insertatail(head,0);
    insertatail(head,1);
  
    node * newhead = segregate(head);
    print(newhead);
    return 0;
}
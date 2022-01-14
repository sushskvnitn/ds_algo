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
}
//length of linked list 
int length(node* head){
    int len=0;
    node * temp = head;
    while(temp!=NULL){
        len++;
        temp= temp->next;
    
    }    return len;
}


// append last k nodes 
node * kappend (node * &head,int k){
    node * newhead;
    node * newtail;
    node* temp =head;
    int l = length(head);
    k=k%l;
    int count=1;
    while(temp->next!=NULL){
        if(count==l-k){
            newtail =temp;
        }
        if(count ==l-k+1 ){
            newhead =temp;
        }
        temp =temp->next;
        count++;
    }
    newtail ->next =NULL;
    temp->next=head;
    return newhead;
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
    cout<<endl<<length(head)<<endl;
    node* newhead = kappend(head,3);
    print(newhead);
    return 0;
}
// day 5
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
node * middle_element(node * head){
  
    node * slow = head;
    node * fast = head->next;
    
    while(fast!=NULL){
        fast =fast->next;
        if(fast!=NULL){
            slow =slow->next;
            fast = fast->next;
        }
    }slow->next=NULL;
    return  slow;
}


int main()
{
    node *head = NULL;
    insertatail(head,2);
    insertatail(head,3);
    insertatail(head,4);
    insertatail(head,5);
    insertatail(head,6);
    node * mid = middle_element(head);
    print(mid);
    return 0;
}
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

    if (head == NULL)//imp 
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

// insert at head
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
//searching in linked lists 
bool search(node * head,int key ){
    node * temp = head;
    while(temp!=NULL){
        if(temp->data== key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//deletion at head 
void deleteathead(node *&head){
    node *todelete =head;
    head = head->next;
    delete todelete;
}
//delete value in linked list 
void deletenode(node * &head,int val){
    node * temp =head;
    if(head == NULL){
        return ;
    }
    if(head->next==NULL){
        deleteathead (head);
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todeleted = temp->next;
    temp->next=temp->next->next;
    delete todeleted;

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

int main()
{
    node *head = NULL;
    insertatail(head, 1);
    insertatail(head, 2);
    insertatail(head, 3);
    insertatail(head, 4);
    insertatail(head, 5);
    insertathead(head, 0);
    insertathead(head, -1);
    insertathead(head, -2);
    
    print(head);
    cout << endl;
    deletenode(head, 4);

    print(head);
    cout << endl<< search(head,1);
   
    return 0;
}
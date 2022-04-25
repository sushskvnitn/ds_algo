
#include<iostream>
using namespace std;

class node
{
    public :
        int data ;
        node* next;
    
    node(int val )
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head , int val)
{
    node* n = new node(val);

    if(head == NULL)
    {
        n->next = n;
        head= n;
        return;
    }
    
    node* temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;

}

void insertAtTail(node* &head , int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void deletion (node* & head ,int pos ){
    if(pos ==1){
        // deleteathead(head);
        return;

    }
    int count =1;
    node * temp =head;
    while(count != pos-1){
    temp =temp->next;
    count ++ ;
    }
    node * todelete = temp->next;
    temp->next=temp ->next->next;

    delete todelete;
}

void display(node* head )
{
    node* temp = head;
   
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }while(temp != head );
    cout<<endl;
}

int main()
{
    node* head = NULL;
    insertAtTail(head , 10);
    insertAtTail(head , 20);
    insertAtTail(head , 30);
    insertAtTail(head , 40);
    insertAtTail(head , 50);
            
    display(head);
   deletion(head,3);
    display(head);
    return 0;
}
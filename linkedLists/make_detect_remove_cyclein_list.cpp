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

//detect cycle
bool detectcycle(node* &head){
    node* slow =head;
    node *fast =head;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast =fast->next->next;
    if(fast == slow){
        return true;
    }
    }
    return false;
}

//make cycle
void makecycle(node* &head,int pos){
    node *temp = head;
    node * startNode;
    int count =1;
    while (temp->next!=NULL)
    {
         if(count == pos){
        startNode =temp;
    }
    temp =temp->next;
    count++;
    }    
  temp->next=startNode;

}
//remove cycle 
void removecycle(node * &head){
    node* slow =head;
    node *fast =head;
    do{
        slow=slow->next;
        fast =fast->next->next;
    }while(slow !=fast);
    fast =head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast =fast->next;
    }
    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    insertatail(head, 1);
    insertatail(head, 2);
    insertatail(head, 3);
    insertatail(head, 4);
    insertatail(head, 5);
    insertatail(head, 6);
    //making cycle
    makecycle(head,3);
   
    cout <<detectcycle<< endl;
    removecycle(head);
    cout<<detectcycle<<endl;
      print(head);
    return 0;
}
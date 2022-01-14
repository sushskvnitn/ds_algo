//1-> 2-> 3-> 4-> 5-> 6-> 
//2-> 1-> 4-> 3-> 6-> 5->

#include <iostream>
using namespace std ;

class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};
//insert at tail
void insertattail(node * &head ,int val){
    node* n= new node(val);
        if (head == NULL)
    {
        head = n;
        return;
    }
    node * temp =head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next=n;

}

//print linked list 
void print(node* head){
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
}

//reverse k nodes 

node* reverse_k(node *&head,int k){
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count=0;
  //reverse k nodes   
while(currptr!=NULL&& count<k){
    nextptr=currptr->next;
    currptr->next= prevptr;
    prevptr=currptr;
    currptr=nextptr;
    count++;
}
if(nextptr!=NULL){
    head->next = reverse_k(nextptr,k);
}
return prevptr;
}

int main(){ 
  node *head =NULL;
  insertattail(head,1);
  insertattail(head,2);
  insertattail(head,3);
  insertattail(head,4);
  insertattail(head,5);
  insertattail(head,6);

  print(head);
  node* newhead = reverse_k(head,2);
  cout<<endl;
  print(newhead);
 return 0;
}
#include <iostream>
using namespace std ;

class node {
    public:
    int data;
    node * next;
    node * prev;
    node(int val){
        data = val;
        next =NULL;
        prev =NULL;
    }
};
 //insrt at head 
 void insertAthead(node * &head,int val){
     node * n = new node(val);
     n->next=head;
     if(head !=NULL){
         head->prev = n;
     }
     head=n;
 }

//insert at tail 
void insertAttail(node * &head,int val){
    //base case 
     if(head ==NULL){
         insertAthead(head,val);
         return;
     }
    node * n = new node(val);
    node * temp =head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next =n;
    n->prev=temp;

}


 //print 
 void display (node * head ){
     node * temp =head;
     while(temp !=NULL){
         cout<<temp->data<<" ";
         temp =temp->next;
     }cout<<endl;   
 }
 //delete at head 
void deleteathead(node * &head){
    node * todelete =head;
    head =head->next;
    head->prev =  NULL;
    delete todelete;
}

//delete a node 
void deletion(node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node *temp =head;
    int count =1;
    while(temp!=NULL && count!=pos){
         temp =temp->next;
         count++;
          }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
            temp->next->prev = temp->prev;
        }
        delete temp;
   
}


int main(){ 
 node * head = NULL;
 insertAttail(head,1);
 insertAttail(head,2);
 insertAttail(head,3);
 insertAttail(head,4);
 insertAthead(head,5);
 display(head);
 deletion(head,5);
 display(head);
 return 0;
}

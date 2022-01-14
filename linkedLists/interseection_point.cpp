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
        cout << temp->data << "   ";
        temp = temp->next;
    }
}

 // length of ll 
 int length(node* head){
 int l =0;
 node * temp =head;
 while(temp!=NULL) {
     temp=temp->next;
     l++;
 }return l;
 }
  
 //find intersection 
 int intersection (node* &head1,node* &head2){
     int l1 = length(head1);
     int l2 = length(head2);
     int d=0;
     node *ptr1;
     node *ptr2;
     if(l1>l2){
         d=l1-l2;
         ptr1 =head1;
         ptr2=head2;

     }
     else{
         d=l2-l1;
         ptr1=head2;
         ptr2 =head1;
     }
     //going d distance forward in larger list
     while(d){
         ptr1 =ptr1->next;
         if(ptr1==NULL){
             return -1;
         }
         d--;
     }
     //now return data where it intersect 
    while (ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 =ptr1->next;
        ptr2 =ptr2->next;
    }
    return -1;

 }


//function for making intersection 
void intersect (node* &head1,node* & head2 ,int pos ){
    node * temp1 =head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node * temp2 =head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    } 
    temp2->next =temp1 ;
}



int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertatail(head1,1);
    insertatail(head1,2);
    insertatail(head1,3);
    insertatail(head1,4);
    insertatail(head1,5);
    insertatail(head1,6);
    insertatail(head2,9);
    insertatail(head2,10);

    intersect(head1,head2,3);
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    cout<<intersection(head1,head2);

    return 0;
}
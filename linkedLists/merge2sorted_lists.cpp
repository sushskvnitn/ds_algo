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
    } cout<<endl;
}

//merging two sorted linked lists 
  node * merg (node * &head1 ,node * &head2 ){
        node *p1 =head1;;
        node * p2 =head2;
        node* dummynode = new node (-1);
        node * p3 = dummynode;
        while(p1!=NULL && p2!=NULL){
            if(p1->data < p2->data){
                p3->next =p1;
                p1=p1->next;

            }else {
                 p3 ->next =p2;
                 p2 = p2->next;

            }
            p3 =p3->next;
        }
        while(p1!=NULL){
            p3->next =p1;
            p1 =p1->next;
            p3 =p3->next;
        }
        while(p2!=NULL){
            p3->next =p2;
            p2 =p2->next;
            p3 =p3->next;
        }
       return dummynode->next;
  }


int main()
{
  node *head1 = NULL;
  node *head2 = NULL;
  int arr1[] ={1,4,5,7};
  int arr2[]={2,3,6};
 for(int i =0 ; i<4;i++){
     insertatail(head1,arr1[i]);
 }
  for(int i =0 ; i<3;i++){
     insertatail(head2,arr2[i]);
 }
 print(head1);
 print (head2);

 node *newhead  =merg(head1,head2);
 print(newhead);
    return 0;
}
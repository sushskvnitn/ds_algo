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
        head = n;return;
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
    cout << endl;
}
node * reverselist(node * &head){
    node * prev= NULL;
    node * curr = head;
    node * next;
    while(curr!=NULL){
        next =curr->next;
        curr->next = prev;
        prev =curr;
        curr = next;
    }
   head= prev  ;
    return head;
}
bool checkpalindrome(node * head){
   
   node * listcopy =NULL;
   node * temp1 = head;
   while(temp1!=NULL){
      insertatail(listcopy,temp1->data);
      temp1 =temp1->next; 
   }
  
   node * reverse = reverselist(listcopy);
//    print(reverse);
//    print(head);
    node * temp =head;
   while(temp!=NULL ){
       if(temp->data ==reverse->data){
           temp =temp->next;
           reverse = reverse->next;
       }else{
           return false;
       }
   }
   return true;
}
//for optimal use stack 
bool isPalindrome(node *head)
   {
       node* temp= head;
       stack <int> s;
       while(temp!=NULL){
           s.push(temp->data);
           temp=temp->next;
       }
       while(head!=NULL){
           int i=s.top();
           s.pop();
           if(head->data!=i){
               return false;
           }
           head=head->next;
       }
       return true;
       
   }


int main()
{
    node *head = NULL;
    insertatail(head,1);
    insertatail(head,2);
    insertatail(head,3);
    insertatail(head,2);
    insertatail(head,1);
    
   cout <<isPalindrome(head);

    return 0;
}

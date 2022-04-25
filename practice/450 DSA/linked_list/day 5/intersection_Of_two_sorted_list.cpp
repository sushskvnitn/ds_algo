//day 5
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
int length(Node * head){
    if(head==NULL){
        return -1;
    }
    int count =0;
    Node * temp  = head;
    while(temp!=NULL){
        count ++;
    }
}

Node* findIntersection(Node* head1, Node* head2)
{
   Node * dummy = new Node(-1);
   Node * ans = dummy;
   Node * temp1=head1;
   Node * temp2=head2;
   while(temp1&& temp2){
       if(temp1->data==temp2->data){
           ans->next = new Node(temp1->data);
           ans=ans->next;
           temp1=temp1->next;
           temp2=temp2->next;
       }
       else if(temp1->data>temp2->data){
           temp2=temp2->next;
       }else if(temp1->data<temp2->data){
           temp1=temp1->next;
       }
   }
    return dummy->next;
}
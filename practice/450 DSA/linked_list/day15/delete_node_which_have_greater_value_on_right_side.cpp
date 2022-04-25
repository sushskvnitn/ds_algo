
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
class Solution
{
    public:
    Node *compute(Node *head)
    {
       if(head == NULL || head->next==NULL){
           return head;
       }
       Node *temp = compute(head->next);
       if(head->data < temp->data){
           delete head;
           return temp;
       }
       head->next = temp;
       return head;
       
   }
};



int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
 //8
// 12 15 10 11 5 6 2 3
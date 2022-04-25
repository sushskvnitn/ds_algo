// DAY5
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
    }
    cout << endl;
}
void partition(node* head,node** first, node** second)
{
	node* fast;
	node* slow;
	slow = head;
	fast = head->next;
	while (fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			slow = slow->next;
			fast = fast->next;
		}
	}
	*first = head;
	*second = slow->next;
	slow->next = NULL;
}
node* SortedMerge(node* a, node* b)
{
	node* result = NULL;
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);
	if (a->data <= b->data) {
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else {
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return (result);
}

void MergeSort(node** headRef)
{
	node* head = *headRef;
	node* a;
	node* b;
	if ((head == NULL) || (head->next == NULL)) {
		return;
	}
	partition(head, &a, &b);
	MergeSort(&a);
	MergeSort(&b);
	*headRef = SortedMerge(a, b);
}
int main()
{
    node *head = NULL;
    insertatail(head,1);
    insertatail(head,5); insertatail(head,7);
    insertatail(head,3); insertatail(head,6);
    insertatail(head,4);
    print (head);
   MergeSort(&head);
    print(head);
    return 0;
}


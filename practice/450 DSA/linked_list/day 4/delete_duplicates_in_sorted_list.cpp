//day 4
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node (int val){
        data = val;
        next =NULL;
    }
};

void  insertatend(node *&head,int val){
    node * n = new node(val);
    if(head==NULL){
        head= n;
        return ;
    }
    node * temp = head;
    while(temp->next!= NULL){
        temp= temp ->next;
    }
    temp->next = n;
}


void remove_duplicates(node * &head){
    if(head ==NULL){
        return ;
    }
    node *temp = head;
    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
            cout<<temp->data<<" ";
            node * todelete =temp->next;
            temp ->next = temp ->next->next;
            delete todelete;
        }else{
          cout<<temp->data<<" ";  
        }
        temp = temp->next;
        
    }
    
}

void print(node * head){
    node * temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp =temp->next;

    }cout<<endl;
}
int main (){
    node * head =NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);
    insertatend(head,6);
    print(head);
    remove_duplicates(head);
    print(head);
}
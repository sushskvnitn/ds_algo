#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
   struct node* next;
};
int main(){
   struct node * lptr;
   struct node * nptr;
   int numnodes=0;
   scanf("%d",&numnodes);
   lptr =NULL;
   //creating a linked lists 
   int i ;
   for( i=0;i<numnodes;i++){
      //creating new node 
       nptr = (struct node*)malloc(sizeof(struct node));
       nptr->data = i+1;
       nptr->next = lptr;
       lptr = nptr;
   }
   //traversing and printing through linkedlists 
   nptr = lptr;
   while(nptr!=NULL){
       printf("%d ",nptr->data);
       nptr =nptr->next;
   }printf("\n");
  // delete the linked list
   nptr=lptr;
   while(lptr!=NULL){
       lptr=lptr->next;
       free(nptr);
       printf("%d   ",lptr->data);
       nptr = lptr;
   }
return 0;
}
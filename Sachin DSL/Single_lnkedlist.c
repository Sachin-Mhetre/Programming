//insert a node  in in beginning/end/anywhere of node 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *current= NULL;

void printList(){
   struct node *p = head;
   printf("\n[");
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

void insertatbegin(int data){
   struct node *lk = (struct node*)malloc(sizeof(struct node));
   lk->data=data;
   lk->next = head;
   head = lk;
}

void insertatend(int data){
	struct node *lk = (struct node*)malloc(sizeof(struct node));
	lk->data = data;
    struct node *linkedlist = head;
    while(linkedlist->next != NULL)
        linkedlist = linkedlist->next;
    linkedlist->next = lk;
}

void main(){
   insertatbegin(12);
   insertatend(22);
   insertatend(30);
   insertatend(44);
   insertatend(50);
   printf("Linked List: ");
   printList();
}



// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedlisttraversal(struct node * ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr = ptr ->next;
    }
}

struct node * insertatbegin(struct node * head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = head;
    return ptr;
};

struct node * insertatindex(struct node * head , int data , int index){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    struct node * p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};

struct node * insertatend(struct node * head , int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    ptr->data = data;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

struct node * afternode(struct node * head , struct node * prevnode ,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next =ptr;
    return head;
};

int main() {
    int ops=0;
    struct node * head;
    struct node * second;
    struct node * third;
    
    head = (struct node * )malloc(sizeof(struct node));
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node * )malloc(sizeof(struct node));
    
    head -> data = 7;
    head -> next = second;
    
    second -> data = 47;
    second -> next = third;
    
    third -> data = 77;
    third -> next = NULL;
    
    printf("Linked list is : \n");
    linkedlisttraversal(head);
    printf("Select the correct option : \n");
    printf("1) Insert at Begin \n2) Insert at index \n3) Insert at end \n4) Insert after node \n");
    scanf("%d",&ops);
    switch(ops){
        case 1:
           head = insertatbegin(head,78);
           break;
        case 2:
           head = insertatindex(head,87,1);
           break;
        case 3:
           head = insertatend(head,89);
        case 4:
           head = afternode(head,third,44);
    }
    linkedlisttraversal(head);
    return 0;
}

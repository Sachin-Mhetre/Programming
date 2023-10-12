#include<stdio.h>

struct node{
   int data;
   struct node * link;
};

struct node * top = NULL;
void push(int data){
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->link=top;
    top = newnode;
}

void display(){
    struct node *temp = top;
    if(top == NULL){
        printf("List is empty");
    }
    else{
        while (temp !=NULL){
            printf("%d ", temp -> data);
            temp =temp->link;
        }
    }
}

void peek(){
    if(top==NULL){
        printf("List is empty");
    }
    else{
        printf("%d is the topmost element",top->data);
    }
}

void pop(){
    struct node * temp = top;
    if(top==NULL){
        printf("List underflow");
    }
    else{
        printf("%d is popped element",top->data);
        top = temp->link;
        free(temp);
    }
}

void main(){
     push(2);
     push(3);
     puch(5);
     displau();
     peek();
     pop();
     peek();
     display();
}
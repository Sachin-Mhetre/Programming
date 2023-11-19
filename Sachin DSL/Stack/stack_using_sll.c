// Online C compiler to run C program online
#include <stdio.h>

struct node{
    int data;
    struct node * link;
};

struct node * top = NULL;

void push(int data){
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = top;
    top = newnode;
}

void display(){
    struct node * temp = top;
    if(top==NULL){
        printf("\nStack underflow");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp = temp->link;
        }
    }
}

void peek(){
    if(top==NULL){
        printf("\nStack underflow");
    }
    else{
        printf("\nTop element is : %d\n",top->data);
    }
}

void pop(){
    struct node * temp = top;
    if(top==NULL){
        printf("\nStack underflow");
    }
    else{
        printf("\npoped element is : %d\n",top->data);
        top = temp->link;
        free(temp);
    }
}

int main() {
     push(2);
     push(3);
     push(5);
     display();
     peek();
     pop();
     peek();
     display();
}

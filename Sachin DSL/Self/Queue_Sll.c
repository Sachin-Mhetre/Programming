#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front = 0;
struct node* rear = 0;

void enqueue(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if(front==0 && rear ==0){
        front=rear=newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    struct node* temp = front;
    if(front==0 && rear==0){
        printf("Underflow");
    }
    else{
        front = front->next;
        free(temp);
    }
}

void peek(){
    if(front==0 && rear==0){
        printf("Queue is empty");
    }
    else{
        printf("Front data : %d",front->data);
    }
}

void display(){
    struct node* temp;
    if(front==0 && rear==0){
        printf("Queue Empty");
    }
    else{
        temp = front;
        while(temp){
            printf("Element = %d\n",temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
    peek();
    return 0;
}

#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Overflow\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Underflow\n");
    } else if (front == rear) {
        printf("The Dequeued element is : %d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("The Dequeued element is : %d\n", queue[front]);
        front++;
    }
}

void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("Element : %d\n", queue[i]);
        }
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Empty Queue\n");
    } else {
        printf("%d\n", queue[front]);
    }
}

int main() {
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * head;

void create() {
    int choice = 1;
    struct node *temp;
    struct node *newnode;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("1 for continue, 0 for exit: ");
        scanf("%d", &choice);
    }

    temp->next = head; // Make it a circular linked list after the loop
}


void display() {
    struct node *temp;

    if (head == NULL) {
        printf("List is empty\n");
    } else {
        temp = head;

        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);

        printf("\n");
    }
}


int main(){
    int ops;
    printf("1) Create \n2) display \n3) Exit\n");
    while(ops!=3){
        printf("Enter choice : ");
        scanf("%d",&ops);
        switch(ops){
            case 1:
            create();
            break;
            
            case 2:
            display();
            break;
            
            case 3:
            break;
        }
    }
}

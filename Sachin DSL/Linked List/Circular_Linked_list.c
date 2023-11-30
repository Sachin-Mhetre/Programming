#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void create() {
    int choice = 1;
    struct node *temp, *newnode;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        temp->next = head; // Make it a circular linked list after the loop

        printf("1 for continue, 0 for exit: ");
        scanf("%d", &choice);
    }
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

void insertNode(int position, int data) {
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (position == 1) {
        newnode->next = head;
        head = newnode;
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = head;
    } else {
        temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Invalid position\n");
        } else {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void deleteNode(int key) {
    struct node *temp, *prev;
    temp = head;
    prev = NULL;

    if (temp != NULL && temp->data == key) {
        prev = head;
        while (prev->next != head) {
            prev = prev->next;
        }

        if (head == head->next) {
            free(head);
            head = NULL;
        } else {
            prev->next = temp->next;
            head = temp->next;
            free(temp);
        }

        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Key not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main() {
    int ops, position, data, key;
    printf("1) Create \n2) Display \n3) Insert Node \n4) Delete Node \n5) Exit\n");

    while (ops != 5) {
        printf("Enter choice: ");
        scanf("%d", &ops);

        switch (ops) {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Enter position and data to insert: ");
                scanf("%d %d", &position, &data);
                insertNode(position, data);
                break;

            case 4:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteNode(key);
                break;

            case 5:
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

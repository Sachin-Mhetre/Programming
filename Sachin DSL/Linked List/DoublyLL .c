#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node * next;
   struct node * prev;
};

struct node * head ,* tail;

void create(){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insertatbegin(){
    int data;
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    newnode->prev = NULL;
    newnode->next = head;
    head = newnode;
};

void insertatindex(){
    int pos=0,i=1;
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    printf("enter the postion : ");
    scanf("%d",&pos);
    if(pos<1){
        printf("Invalid option");
    }
    else if (pos==1){
        insertatbegin();
    }
    else{
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        while(i!=pos-1){
            p = p->next;
            i++;
        }
        newnode->prev = p;
        newnode->next = p->next;
        p->next = newnode;
        p->next->prev = newnode;
    }
};

void insertatend(){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
};

struct node * deleteatbegin(struct node * head){
    struct node*temp;
    if(head==0){
        printf("List is empty");
    }
    else{
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return head;
    }
}

struct node * deletefromend(struct node * head,struct node * tail){
    struct node * temp;
    if (tail = 0)
    {
        printf("\n List Empty\n");
    }
    else{
        temp = tail;
        temp->prev->next = 0 ;
        tail = tail->prev;
        free(temp);
    }
    
}

void display(){
    struct node * temp = head;
    while(temp!=NULL){
        printf("Element : %d\n",temp->data);
        temp = temp->next;
    }
}

int main(){
    int ops;
    printf("\n1) Create \n2) Display \n3) Insert at begin \n4) Insert at index \n5) Insert at End \n6) Delete at Begin \n7) Delete at end \n8) Exit \n");
    while(ops!=8){
        printf("Enter the choice : ");
        scanf("%d",&ops);
        switch(ops){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insertatbegin();
                break;
            case 4:
                insertatindex();
                break;
            case 5:
                insertatend();
                break;    
            case 6:
                head = deleteatbegin(head);
                break;    
            case 7:
                head = deletefromend(head,tail);
                break; 
            case 8:
                break;       
        }
    }
    return 0;
}

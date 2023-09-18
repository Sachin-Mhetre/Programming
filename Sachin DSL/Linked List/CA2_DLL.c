#include<stdio.h>
#include<stdlib.h>

struct node{
	float data;
	struct node *prev, *next;
};

struct node * head , *tail=0;

void create(){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%f",&newnode->data);
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

void display(){
    struct node * temp = head;
    int count= 0;
    while(temp!=NULL){
        printf("Element : %0.2f\n",temp->data);
        count++;
        temp = temp->next;
    }
    printf("Count of nodes: %d\n",count);
}

void sub(){
	struct node * p = head;
	while(p!=NULL){
		p->data = p->data - 2;
		p = p->next;
	}
}

void greatest(){
	struct node *p=head;
	float max = p->data;
	while(p!=NULL){
		if (p->data > max) {
            max = p->data;
        }
		p = p->next;	
	}
	printf("Greatest element is: %0.2f\n",max);
}

void smallest(){
	struct node *p=head;
    float min = p->data;
    while(p!=NULL){
		if (p->data < min) {
            min = p->data;
        }
		p = p->next;	
	}
	printf("Greatest element is: %0.2f\n",min);
}


int main(){
	int ops;
	printf("1) Create \n2) Display \n3) Sub \n4) Greatest \n5) Smallest \n6) Exit\n");
	while(ops!=6){
		printf("Enter Choice:");
		scanf("%d",&ops);
		switch(ops){
			case 1:
				create();
				break;
			case 2:
			    display();
				break;
		    case 3:
			    sub();
				break;	
			case 4:
				greatest();
			    break;	
			case 5:
				smallest();
			    break;
			case 6:
			   break;	    
		}
	}
}

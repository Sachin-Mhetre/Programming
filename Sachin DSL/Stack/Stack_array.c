#include<stdio.h>

int stack[5];
int top = -1;
void push(){
    int x;
    printf("Enter the element to be pushed : ");
    scanf("%d",&x);
    if(top == 4){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop(){
    int item;
    if (top ==-1){
        printf("Stack Underflow\n");
    }
    else{
        item=stack[top--];
        printf("Popped item is : %d\n",item);
    }
}

void peek(){
    if (top==-1) {printf("\nStack Empty");}
    else{printf("Topmost element is : %d\n",stack[top]);}
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}

int main(){
    int x=1;
    printf("1) Push \n2) Pop \n3) Peek \n4) Display \n5) Exit \n");
    while(x){
        printf("\nEnter your choice : ");
        int ops;
        scanf("%d",&ops);
        switch (ops){
            case 1:
                  push();   // assigning value to particular memory in stack
                  break;
            case 2:
                  pop();    // removing data from stack 
                  break;
            case 3:
                  peek();  // getting the top most element of stack without removing that element 
                  break;
            case 4:
                  display();
                  break;
            case 5:
                  x=0; 
                  break;  
            default:
                   printf("Invalid option ");                           
        }
    }
}

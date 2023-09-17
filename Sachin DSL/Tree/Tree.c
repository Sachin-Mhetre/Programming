// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *left,*right;
};

struct node * create(){
    int x;
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data ( -1 of no node)");
    scanf("%d",&x);
    if(x == -1){
        return 0;
    }
    newnode->data = x;
    printf("Enter left child of %d",x);
    newnode->left = create();
    printf("Enter right child of %d",x);
    newnode->right = create();
    return newnode;
};

struct node * preorder(struct node * root){
    if(root==0){
        return 0;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

struct node * inorder(struct node * root){
    if(root==0){
        return 0;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}

struct node * postorder(struct node * root){
    if(root==0){
        return 0;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

int main() {
    int ops;
    printf("1) Create \n2) Preorder \n3) Inorder \n4) Postorder \n5) Quit \n");
    scanf("%d",&ops);
    struct node * root;
    while(ops!=5){
        switch(ops){
            case 1:
               root = create();
               break;
            case 2:
               root = preorder(root);
               break;
            case 3:
               root = inorder(root);
               break;
            case 4:
               root = postorder(root);
               break;
            case 5:
               break;
        }
    }
    
    return 0;
}

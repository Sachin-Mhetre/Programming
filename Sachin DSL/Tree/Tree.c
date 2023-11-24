// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * root = NULL;

struct node* create(){
    int x;
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data (-1 for quit) : ");
    scanf("%d",&x);
    if(x==-1){
        free(newnode);
        return NULL;
    }
    newnode->data = x;
    printf("Enter the data for left child of %d",x);
    newnode->left = create();
    printf("Enter the data for right child of %d ",x);
    newnode->right = create();
    return newnode;
}

void inorder(struct node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void preorder(struct node * root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    inorder(root->left);
    inorder(root->right);
}

void postorder(struct node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    inorder(root->right);
    printf("%d ",root->data);
}

struct node* insert(struct node * root , int key){
    if(root==NULL){
        struct node * newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = key;
        newnode->left=newnode->right=NULL;
        return newnode;
    }
    if(key<root->data){
        root->left = insert(root->left,key);
    }else if(key>root->data){
        root->right = insert(root->right,key);
    }
    return root;
}

struct node * delete(struct node * root , int key){
    //case 1 : non child
    if(root==NULL){
        return root;
    }
    if(root->data>key){
        root->left = delete(root->left,key);
        return root;
    }else if(root->data<key){
        root->root = delete(root->right,key);
        return root;
    }
    
    //case 2: one child
    if(root->left==NULL){
        struct node * temp = root->right;
        free(root);
        return temp;
    }else if(root->right == NULL){
        struct node * temp = root->left;
        free(root);
        return temp;
    }
    
    else{
        struct node * succParent = root;
        struct node * succ = root->right;
        while(root->left!=NULL){
            succParent = succ;
            succ =succ->left;
        }
        if(succParent != root){
            succParent->left = succ->right;
        }
        else{
            succParent->right = succ->right;
            root->data = succ->data;
            free(succ);
        }
        return root;
    }
    return root;
}

int main() {
    int ops;
    printf("1) Create \n2) Inorder \n3) Preorder \n4) Postorder \n5) Insert \n6) Delete \n7) Quit \n");
    while(ops!=6){
        printf("\nEnter the choice : ");
        scanf("%d",&ops);
        switch(ops){
            case 1:
            root = create();
            break;
            
            case 2:
            inorder(root);
            break;
            
            case 3:
            preorder(root);
            break;
            
            case 4:
            postorder(root);
            break;
            
            case 5:
            int key;
            printf("Enter data to be insert : ");
            scanf("%d",&key);
            root = insert(root,key);
            break;
            
            case 6:
            int key;
            printf("Enter data to be insert : ");
            scanf("%d",&key);
            root = delete(root,key)
            break;
            
            case 7:
            break;
        }
    }
    return 0;
}

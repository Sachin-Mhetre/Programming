#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* create() {
    int x;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    if (x == -1) {
        free(newnode); // Free the allocated memory
        return NULL;
    }
    newnode->data = x;
    printf("Enter left child of %d: ", x);
    newnode->left = create();
    printf("Enter right child of %d: ", x);
    newnode->right = create();
    return newnode;
}

void preorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

struct node* deletenode(struct node* root, int k) {
     // Base case 1
    if (root == NULL){
        return root;
    }
    
    if (root->data > k) {
        root->left = deletenode(root->left, k);
        return root;
    }
    else if (root->data < k) {
        root->right = deletenode(root->right, k);
        return root;
    }
 
    // Case 2: one child
    if (root->left == NULL) {
        struct node* temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL) {
        struct node* temp = root->left;
        free(root);
        return temp;
    }
 
    //Case 3: Both child
    else {
        struct node* succParent = root;
 
        // Find element
        struct node* succ = root->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
        if (succParent != root)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
            root->data = succ->data;
            free(succ);
        return root;
    }

    return root;
}

int main() {
    int ops;
    printf("1) Create\n2) Preorder\n3) Inorder\n4) Postorder\n5) Remove node\n6) Quit\n");
    scanf("%d", &ops);
    struct node* root = NULL;

    while (ops != 6) {
        switch (ops) {
            case 1:
                root = create();
                break;
            case 2:
                if (root != NULL) {
                    printf("Preorder traversal: ");
                    preorder(root);
                    printf("\n");
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 3:
                if (root != NULL) {
                    printf("Inorder traversal: ");
                    inorder(root);
                    printf("\n");
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 4:
                if (root != NULL) {
                    printf("Postorder traversal: ");
                    postorder(root);
                    printf("\n");
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 5:
                if (root != NULL) {
                    int key;
                    printf("Enter the node to delete: ");
                    scanf("%d", &key);
                    root = deletenode(root, key);
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 6:
                break;
            default:
                printf("Invalid choice\n");
                break;
        }

        printf("Choice option: ");
        scanf("%d", &ops);
    }

    return 0;
}

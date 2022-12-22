//WAP to create binary search tree

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

void inorder(struct node*);
void postorder(struct node*);
void preorder(struct node*);
void createtreerecursive(struct node**, struct node** ,int x);

int main(){
    struct node *root=NULL;
    int n, data ,i;
    printf("Enter the number of elements to add in BST:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data);
        createtreerecursive(&root, NULL,data);
    }
    printf("\nThe inorder traversal of the tree: ");
    inorder(root);
    printf("\nThe preorder traversal of the tree: ");
    preorder(root);
    printf("\nThe postorder traversal of the tree: ");
    postorder(root);
    return 0;
}

void createtreerecursive(struct node **temp,struct node**prev ,int x){
    if(*temp == NULL){
        struct node *ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data =x;
        ptr->left =NULL;
        ptr->right = NULL;
        if(prev==NULL){
            *temp = ptr;
        }
        else if((*prev)->data>=x){
            (*prev)->left = ptr;
        }
        else{
            (*prev)->right = ptr;
        }
    }
    else if((*temp)->data>=x){
        createtreerecursive(&(*temp)->left,temp,x);
    }
    else{
        createtreerecursive(&(*temp)->right,temp,x);
    }
}

void inorder(struct node *temp){
    if(temp!=NULL)
    {
        if(temp->left!=NULL){
            inorder( temp->left);
        }
        printf("%d ",temp->data);
        if(temp->right!=NULL){
            inorder(temp->right);
        }
    }
}

void preorder(struct node *temp){
    if(temp)
    {
        printf("%d",temp->data);
        if(temp->left!=NULL){
            preorder( temp->left);
        }
        if(temp->right!=NULL){
            preorder(temp->right);
        }
        return;
    }
}


void postorder(struct node *temp){
    if(temp)
    {
        if(temp->left!=NULL){
            postorder( temp->left);
        }
        if(temp->right!=NULL){
            postorder(temp->right);
        }
        printf("%d",temp->data);
        return;
    }
}
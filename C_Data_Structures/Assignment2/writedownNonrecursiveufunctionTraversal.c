#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
}*root=NULL;

struct stack{
    struct node* data;
    struct stack* next;
}*top=NULL;
void createtree1(int);
void worecurssiveinorder(struct node**);
void push(struct node*);
struct node*pop();

int main(){
    char des;
    int n;
    printf("Enter the inorder values of BST:");
    do{
        scanf("%d",&n);
        createtree1(n);
        printf("press 'y' to insert new node:");
        scanf("%s",&des);
    }while(des=='y'||des=='Y');
    worecurssiveinorder(&root);
}

void worecurssiveinorder(struct node**root){
    if(*root==NULL){
        printf("tree is empty!");
    }
    else{
        int bol=1;
        struct node *temp=*root;
        while(bol){
            while(temp!=NULL){
                push(temp);
                temp=temp->left;
            }
            temp=pop();
            printf("%d ",temp->data);
            while(temp->right==NULL){
            temp=pop();
            printf("%d ",temp->data);
            }
            temp=temp->right;
            if(temp->right==NULL&&temp->left==NULL && top==NULL){
                printf("%d ",temp->data);
                bol=0;
            }
        }
    }
}

void createtree1(int x){
    struct node *ptr , *temp ,*prev = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data =x;
    ptr->left =NULL;
    ptr->right = NULL;
    if(root == NULL){
        root = ptr;
    }
    else{
        temp = root;
        while(temp!=NULL){
            prev = temp;
            if(temp->data>=x){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        if(prev->data>x){
                prev->left = ptr;
            }
            else{
            prev->right =ptr;
            }
    }
}


void push(struct node* temp){
    struct stack*ptr;
    ptr= (struct stack*) malloc(sizeof(struct stack));
    ptr->data=temp;
    ptr->next = top;
    top=ptr;
}

struct node*pop(){
    if(top==NULL){
        printf("Empty stack!");
    }
    else{
        struct node *temp=top->data;
        struct stack *temp1= top;
        top=top->next;
        free(temp1);
        return temp;
    }
    return NULL;
}
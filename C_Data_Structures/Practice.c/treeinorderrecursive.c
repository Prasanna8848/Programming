#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
}*root=NULL;

void createtree1(int x);
void inorder(struct node*);
void createtreerecursive(struct node**, struct node** ,int x);

void worecurssive();

int main(){
    int n, data ,i;
    printf("Enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data);
        //createtree1(data);
        createtreerecursive(&root, NULL,data);
    }
    //inorder(root);
    worecurssive();
}

void createtreerecursive(struct node **temp,struct node**prev ,int x){
    // struct node *ptr = *temp;
    if(*temp == NULL){
        struct node *ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data =x;
        ptr->left =NULL;
        ptr->right = NULL;
        if(prev==NULL){
            root = ptr;
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
    return;
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



void inorder(struct node *temp){
    if(temp->left!=NULL){
        inorder( temp->left);
    }
    if(temp->right!=NULL){
        inorder(temp->right);
    }
    printf("%d",temp->data);
    return;
}

void worecurssive(){
    struct node *temp=root , *temp2,*prev=NULL;
    while(temp!=NULL){
        temp2 =root;
        if(temp->left == prev){
            prev =temp;
            printf("%d",temp->data);
            if(temp->left==NULL){
                while(temp2->left!=temp){
                    temp2 =temp2->left;
                }
                temp = temp2;
            }
            else{
                temp= temp->right;
            }
        }
        else{
            temp =temp->left;
        }
        }

    }

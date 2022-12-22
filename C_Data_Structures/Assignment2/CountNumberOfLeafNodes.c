//count number of leaf nodes
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
}*root=NULL;

void createtree1(int x);
int countleafs(struct node*,int);
void createtreerecursive(struct node**, struct node** ,int x);

int main(){
    int n, data ,i;
    printf("Enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&data);
        createtree1(data);
        //createtreerecursive(&root, NULL,data);
    }
    int y=countleafs(root,0);
    printf("The  number of leaf nodes are: %d",y);
    //worecurssive();
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



int countleafs(struct node *root,int n){
    if(root->left!=NULL){
        n=countleafs( root->left,n);
    }
    
    if(root->right!=NULL){
        n=countleafs(root->right,n);
    }
    if (root->right==NULL&&root->left==NULL){
      return ++n;
    }
    else{
        return n;
    }  
}

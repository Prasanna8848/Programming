#include<stdio.h>
#include<stdlib.h>
void createpoly(int , int);
void displaypolynomial();

struct node{
    int coef;
    int power;
    struct node* next;
}*head=NULL;
int main(){
    int n , c, p;
    printf("\nEnter the no. of terms in the polynoimal");
    scanf("%d",&n);
    printf("\nEnter the coeffecient and power : (power in terms of descending order)\n");
    for(int i= 0;i<n;i++){
        scanf("%d %d",&c,&p);
        createpoly(c,p);
    }
    displaypolynomial();
}

void createpoly(int c, int p){
    struct node *ptr, *temp = head;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->coef = c;
    ptr->power = p;
    ptr->next = NULL;
    if(head == NULL){
        head = ptr;
    }
    else{
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void displaypolynomial(){
    struct node *temp = head;
    if(head==NULL){
        printf("\nNo elements in the linkedlist");
    }
    while(temp!=NULL){
        printf("%dX^%d",temp->coef,temp->power);
        if(temp->next!=NULL){
            printf(" + ");
        }
        temp = temp->next;
    }
}
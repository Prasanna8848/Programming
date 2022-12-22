//Wap to implement stack using queue.
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
} *queue1front=NULL,*queue2front=NULL;

void enqueue();
void dequeue();
void display();
void reverse(struct node**,struct node**);

int main(){
    int n=-1;
    printf("\nPress 1 to push on the stack:");
    printf("\nPress 2 to Pop from the stack:");
    printf("\nPress 3 to display the Stack elements:");
    printf("\nPress 0 to end the program");
    while(n!=0){
        printf("\nYour choice: ");
        scanf("%d",&n);
        switch (n){
            case 1 :
            enqueue();
            break;
            case 2 :
            dequeue();
            break;
            case 3 :
            display();
            break;
            case 0 :
            printf("\nProgram Ended!");
            break;
            default:
            printf("Invalid Option");
            break;
        }
    }
}

void enqueue(){
    reverse(&queue1front,&queue2front);
    int d;
    printf("\nEnter the element to put in the Stack:");
    scanf("%d",&d);
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next=NULL;
    ptr->data = d;
    queue1front = ptr;
    printf("\nPushed");
    reverse(&queue2front,&queue1front);
}

void dequeue(){
    if(queue1front==NULL){
        printf("\nThe Stack is empty");
    }
    else{
        printf("\nThe deleted element in the stack is: %d",queue1front->data);
            struct node* temp;
            temp = queue1front;
            queue1front = queue1front->next;
            free(temp);
    }
}

void display(){
    if(queue1front!=NULL){
        printf(" %d",queue1front->data);
    }
    else{
        printf("\nThe Stack is empty!!");
    }
}

void reverse(struct node**q1,struct node**q2){
    struct node*temp=*q2;
    while(*q1!=NULL){
        if(temp==NULL){
            *q2=*q1;
            *q1 = (*q1)->next;
            (*q2)->next =NULL;
            temp=*q2;
        }
        else{
        temp->next=*q1;
        *q1 = (*q1)->next;
        temp = temp->next;
        temp->next=NULL;
        }
    }
}
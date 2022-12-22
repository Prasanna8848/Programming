//Wap to implement priority queue using linked list(highest no. as highest priority).
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    int priority;
    struct node* next;
}*front = NULL;

void enqueue();
void dequeue();
void display();

int main(){
    int n=-1;
    printf("\nPress 1 to Enqueue on the queue:");
    printf("\nPress 2 to Dequeue from the queue:");
    printf("\nPress 3 to display the queue elements:");
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
    int d,p;
    printf("\nEnter the element and priority factor to put in the queue:");
    scanf("%d %d",&d,&p);
    struct node *ptr, *temp,*prev=NULL;
    ptr = (struct node *)malloc(sizeof(struct node*));
    ptr->next=NULL;
    ptr->data = d;
    ptr->priority =p;
    if(front==NULL){
        front = ptr;
    }
    else{
        if(((front->priority)<p)){
            ptr->next = front;
            front =ptr;   
        }
        else{
            temp = front;
            while((temp->next!=NULL)&&(((temp->next)->priority)>=p)){
                temp=temp->next;
            }
            ptr->next = temp->next;
            temp->next = ptr;
        }
    }
    printf("\nEnqueued");
}

void dequeue(){
    if(front==NULL){
        printf("\nThe queue is empty");
    }
    else{
        printf("\nThe deleted element in the queue is: %d",front->data);
        struct node* temp;
        temp = front;
        front = front->next;
        free(temp); 
    }
}

void display(){
    if(front!=NULL){
        struct node* temp = front;
        printf("\nThe data in the queue are: ");
        while(temp!=NULL){
            printf(" %d",temp->data);
            temp= temp->next;
        }
    }
    else{
        printf("\nThe queue is empty!!");
    }
}
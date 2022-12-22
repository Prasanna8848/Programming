//WAP to implement queue using stack
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top_of_stack=NULL,*temp_stack_top=NULL;

void push();
void pop();
void display();
void reverse(struct node**,struct node**);

int main(){
    int choice=-1;
    printf("\nPress 1 to Enqueue an element in the queue.");
    printf("\nPress 2 to Dequeue an element in the queue.");
    printf("\nPress 3 to display an elements in the queue.");
    printf("\nPress 0 to end the program.");
    while(choice!=0){
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice){
            case 0:
                printf("\nqueue program ended!");
                break;
            case 1:
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                display();
                break;
            default:
                printf("Invalid choice!");
                break;
        }
    }
}

void push(){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr!=NULL){
        ptr->next =top_of_stack;
        top_of_stack = ptr;
        printf("\nEnter the data to enque in the queue :");
        scanf("%d",&(ptr->data) );
        printf("\n%d successfully inserted in the queue : ",ptr->data);
    }
    else{
        printf("\nMemory Allocation failed!");
    }
}

void pop(){
    if(top_of_stack!=NULL){
        reverse(&top_of_stack,&temp_stack_top);
        struct node *ptr = temp_stack_top;
        printf("\nDequeued element is : %d ",temp_stack_top->data);
        temp_stack_top = temp_stack_top->next;
        reverse(&temp_stack_top,&top_of_stack);
        free(ptr);
    }
    else{
        printf("\nThe queue is empty!");
    }
}

void display(){
    if(top_of_stack != NULL){
        reverse(&top_of_stack,&temp_stack_top);
        struct node* ptr = temp_stack_top;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        reverse(&temp_stack_top,&top_of_stack);
    }
    else{
        printf("\nQueue is empty");
    }
}

void reverse(struct node**s1,struct node**s2){
    struct node *temp;
    while(*s1!=NULL){
        temp=*s1;
        *s1 = (*s1)->next;
        temp->next=*s2;
        *s2=temp;
    }
}
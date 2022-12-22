#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top_of_stack=NULL;

void push();
void pop();
void display();

int main(){
    int choice=-1;
    printf("\nPress 1 to push an element in the stack.");
    printf("\nPress 2 to pop an element in the stack.");
    printf("\nPress 3 to display an element in the stack.");
    printf("\nPress 0 to end the program.");
    while(choice!=0){
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice){
            case 0:
                printf("Stack program ended!");
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
        printf("Enter the data to push in the stack :");
        scanf("%d",&(ptr->data));
        printf("%d successfully inserted in the array : ",ptr->data);
    }
    else{
        printf("Memory Allocation failed!");
    }
}

void pop(){
    if(top_of_stack!=NULL){
        struct node *ptr = top_of_stack;
        printf("Popped element is : %d ",top_of_stack->data);
        top_of_stack = top_of_stack->next;
        free(ptr);
    }
    else{
        printf("The stack is empty!");
    }
}

void display(){
    if(top_of_stack != NULL){
        struct node* ptr = top_of_stack;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    else{
        printf("\nstack is empty");
    }
}
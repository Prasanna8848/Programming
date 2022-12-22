#include<stdio.h>

void push(int *,int );
void pop(int *);
void display(int *);
int top_of_stack = -1;

int main(){
    int size , choice ,data;
    printf("Enter the height of stack: ");
    scanf("%d",&size);
    int stack[size];
    printf("\nPress 1 to push an element in the stack.");
    printf("\nPress 2 to pop an element in the stack.");
    printf("\nPress 3 to display all element in the stack.");
    printf("\nPress 0 to end the program.");
    while(choice!=0){
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice){
            case 0:
                printf("Stack program ended!");
                break;
            case 1:
                push(stack,size);
                break;
            case 2 :
                pop(stack);
                break;
            case 3 :
                display(stack);
                break;
            default:
                printf("Invalid choice!");
                break;
        }
    }
    return 0;
}

void push(int *stack, int size ){
    if(top_of_stack==size-1){
        printf("Overflow!");
    }
    else{
        int data;
        printf("Enter the data to push in the stack :");
        scanf("%d",&data);
        stack[++top_of_stack] = data;
        printf("%d inserted in the stack successfully!",data);
    }
}

void pop(int *stack){
    if(top_of_stack==-1){
        printf("Underflow!");
    }
    else{
        printf("popped element :%d",stack[top_of_stack]);
        top_of_stack --;
    }
}

void display(int *stack){
    if(top_of_stack!=-1){
        int top = top_of_stack;
        printf("Elements in the stack");
        while(top!=-1){
            printf("%d ",stack[top--]);
        }
    }
    else{
        printf("\n Underflow!");
    }
}
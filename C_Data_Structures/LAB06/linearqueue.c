#include<stdio.h>

void insert(int [],int ,int);
void delete(int [],int);
void display(int [],int);
int rear = -1;
int front = -1;

int main(){
    int n , c=1 , x;
    printf("\nEnter the size of queue :");
    scanf("%d",&n);
    int queue[n];
    printf("\nPress 1 to insert data in the queue :");
    printf("\nPress 2 to delete data from queue :");
    printf("\nPress 3 display the data in the queue:");
    printf("\nPress 0 to end the program and display the data in the queue:");
    while(n!=0){
        printf("\nEnter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1 :
                printf("Enter the element to insert in the queue:");
                scanf("%d",&x);
                insert(queue, n, x);
                break;
            case 2:
                delete(queue, n);
                break;
            case 3:
                display(queue ,n);
                break;
            case 0:
                display(queue ,n);
                break;
            default:
                printf("Invalid command");
                break;
        }
    }
}

void insert(int queue[], int size, int x){
    if ((rear+1)==size){
        printf("queue is full");
    }
    else{
        if(front ==-1 &&rear ==-1){
            front++;
            rear++;
            queue[rear]=x;
        }
        else{
            rear++;
            queue[rear]=x;
            
        }
    }
}

void delete(int queue[], int n){
    if(rear ==-1 && front ==-1){
        printf("Queue is empty");
    }
    else{
        if(front ==rear){
            printf("Deleted item : %d",queue[front]);
            front = rear = -1;
        }
        else{
            printf("Deleted item : %d",queue[front]);
            front++;
        }
    }
}

void display(int queue[],int n){
    if(rear ==-1 && front ==-1){
        printf("Queue is empty");
    }
    else{
        printf("Data values are : ");
    for(int i=front ;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    }
}
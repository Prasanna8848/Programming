//WAP to implement circular queue using array.
#include<stdio.h>
int front = -1;
int rear = -1;
int size=5;

void enqueue(int *);
void dequeue(int *);
void display(int *);

int main(){
    int circularqueue[size] , n=-1;
    printf("\nPress 1 to Enqueue on the queue:");
    printf("\nPress 2 to Dequeue from the queue:");
    printf("\nPress 3 to display the queue elements:");
    printf("\nPress 0 to end the program");
    while(n!=0){
        printf("\nYour choice: ");
        scanf("%d",&n);
        switch (n){
            case 1 :
            enqueue(circularqueue);
            break;
            case 2 :
            dequeue(circularqueue);
            break;
            case 3 :
            display(circularqueue);
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

void enqueue(int* queue){
    if(rear==front-1||(front==0 && rear ==size-1)){
        printf("\nQueue is FULL");
    }
    else{
        int data;
        printf("Enter the element to put in queue:");
        scanf("%d",&data);
        if(front == -1&&rear==-1){
            front=rear=0;
            queue[rear] = data;
        }
        else if(front!=0 &&rear==size-1){
            rear=0;
            queue[rear]=data;
        }
        else{
            rear++;
            queue[rear]=data;
        }
    }
}

void dequeue(int *queue){
    if(front==-1 && rear==-1){
        printf("\nQUEUE is Empty.");
    }   
    else{
        printf("The deleted element is %d",queue[front]);
        if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
}

void display(int *queue){
    int i=front;
    printf("\nThe data in the circular queue are:");
    if(front==-1){
        printf("\nQueue is Empty");
    }
    else{
    while(i!=rear){
        printf(" %d",queue[i]);
        if(i==size-1){
            i=0;
        }
        else{
            i++;
        }    
    }
    printf(" %d",queue[i]);
    }
}
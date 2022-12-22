#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void createnode(int);
void displayalldata();
void reversenode();

int main(){
    int m ,i,x;
    printf("Enter no of nodes to be created :");
    scanf("%d",&m);
    printf("Enter %d values to be stored:",m);
    for(i=0;i<m;i++){
        scanf("%d",&x);
        createnode(x);
    }
    printf("Data in the nodes before reversing are : ");
    displayalldata();
    reversenode();  
    printf("Data in the nodes after reversing are : ");
    displayalldata();
    return 0;
}

//Function to create a new linked list.
void createnode(int x){
    struct node *ptr , *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    if(head == NULL){
        head = ptr;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp =temp->next;
        }
        temp->next = ptr;
    }

}

//Function to display all the elements stored in the nodes
void displayalldata(){
    struct node* ptr;
    ptr = head;
    if(ptr==NULL){
        printf("No Data found!!!");
    }
    else{
        while(ptr!= NULL){ 
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}

//function to reverse all the nodes.

void reversenode(){
    if(head==NULL){
        printf("\nThe linked list is empty!");
    }
    else{
    struct node *temp, *t1, *t2;
    temp= head;
    t2=NULL;
    while(temp->next != NULL){
        t1=t2;
        t2= temp;
        temp=temp->next;
        t2->next = t1; 
    }
    temp->next=t2;
    head = temp;
    }
}
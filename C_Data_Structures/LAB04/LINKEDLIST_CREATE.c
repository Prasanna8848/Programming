#include<stdio.h>
#include<stdlib.h>

void createnode(int);
void displayalldata(); 

struct node{
    int data;
    struct node *next;
}*head=NULL;

int main(){
    int n ,i,x;
    printf("\nEnter the number of linked list node:");
    scanf("%d",&n);
    printf("Enter the data values : ");
    for(i=0;i<n;i++){
        scanf("%d",&x);
        createnode(x);
    }
    printf("The datas in the nodes are : ");
    displayalldata();
}

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
}
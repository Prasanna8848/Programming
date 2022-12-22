#include<stdio.h>
#include<stdlib.h>

void createnode(int);
void displayalldata(); 
void insertatbeg(int);
void insertafterelement(int , int);
void deleteatend();
void deleteatkth(int);


struct node{
    int data;
    struct node *next;
}*head=NULL;

int main(){
    int n=1, x, i, m, p;
    printf("\nPress 1 to enter and store data in a linked list :");
    printf("\nPress 2 to insert the node at the beginning :");
    printf("\nPress 3 to insert the node after an element :");
    printf("\nPress 4 to delete the node at the end :");
    printf("\nPress 5 to delete the node at the kth position :");
    printf("\nPress 6 display the data :");
    printf("\nPress 0 to end the program and display the data :");
    while(n!=0){
        printf("\nYour Choice:");
        scanf("%d",&n);
        switch(n){
            case 0:
                printf("Data in the nodes are : ");
                displayalldata();
                break;
            case 1:
                printf("Enter no of nodes to be created :");
                scanf("%d",&m);
                printf("Enter %d values to be stored:",m);
                for(i=0;i<m;i++){
                    scanf("%d",&x);
                    createnode(x);
                }
                break;
            case 2:
                printf("Enter the value to be stored at the begining : ");
                scanf("%d",&x);
                insertatbeg(x);
                break;
            case 3:
                printf("Enter the data and the other element to store data after it : ");
                scanf("%d %d",&x,&p);
                insertafterelement(x,p);
                break;  
            case 4:
                deleteatend();
                break;
            case 5:
                printf("Enter the position to delete the data at the position : ");
                scanf("%d",&p);
                deleteatkth(p);
                break;
            case 6:
                printf("Data in the nodes are : ");
                displayalldata();
                printf("\n");
                break;
            default :
                printf("\nInavlid Input!!!!");
                break;
        }
    }
}


//Function to create a new linked list.
void createnode(int x){
    struct node *ptr , *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=head;
    if(head == NULL){
        head = ptr;
        ptr->next=head;
    }
    else{
        temp = head;
        while(temp->next != head){
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

        while(ptr->next!= head){ 
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d ",ptr->data);
    }
}

//Function to insert an element at the beginning.
void insertatbeg(int x){
    struct node *ptr, *temp;
    ptr =(struct node *) malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if(head==NULL){
        head = ptr;
        ptr->next = head;
    }
    else{
        temp = head;
        while(temp->next != head){
            temp =temp->next;
        }
        temp->next=ptr;
        ptr->next = head;
        head=ptr;
    }
}

//Function to insert an element after an specific element.
void insertafterelement(int x, int p){
    struct node *ptr ,*temp;
    if(head==NULL){
        printf("\nNo Element found !!");
    }
    else{
        temp = head;
        while(temp->data!=p &&temp->next !=head){
            temp=temp->next;
        }
        if(temp->data==p){
            ptr =(struct node *) malloc(sizeof(struct node));
            ptr->data = x;
            ptr->next = temp->next;
            temp->next = ptr;
        }
        else{
            printf("\nThe data was not found!");
        }
    }
}

//function to delete the node at the end.
void deleteatend(){
    struct node *temp = head;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        while((temp->next)->next!= head){
            temp= temp->next;
        }
        free(temp->next);
        temp->next = head;
    }
}

//Function to delete a element at the kth position.
void deleteatkth(int k){
    int i=1;
    struct node *temp=head, *prev= NULL;
    if(k==1){
        while(temp->next != head){
            temp =temp->next;
        }
        temp->next=head->next;
        temp = head;
        head = temp->next;
        free(temp);
    }
    else if(head==NULL){
        printf("\nNo node found!");
    }
    else{
        while(i<k && temp->next!=NULL){
            prev = temp;
            temp = temp->next;
            i++;
        }
        if(i==(k-1) && temp->next==head){
            deleteatend();
        }
        else if(i==k){
            prev->next = temp->next;
            free(temp);
        }
        else{
            printf("\nThe position is out of list!");
        }
    }
}
 #include<stdio.h>
#include<stdlib.h>

void createnode(int);
void displayalldata(); 
void insertatbeg(int);
void insertatend(int);
void insertatkth(int,int);
void deleteatbeg();
void deleteatend();
void deleteatkth(int);

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL , *last = NULL;

int main(){
    int n=1, x, i, m, p;
    printf("\nPress 1 to enter and store data in a linked list :");
    printf("\nPress 2 to insert the node at the beginning :");
    printf("\nPress 3 to insert the node at the end :");
    printf("\nPress 4 to insert the node at the kth position :");
    printf("\nPress 5 to delete the node at the beginning :");
    printf("\nPress 6 to delete the node at the end :");
    printf("\nPress 7 to delete the node at the kth position :");
    printf("\nPress 8 display the data :");
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
                printf("Enter the value to be stored at the end : ");
                scanf("%d",&x);
                insertatend(x);
                break;
            case 4:
                printf("Enter the data and position to store the data : ");
                scanf("%d %d",&x,&p);
                insertatkth(x,p);
                break;
            case 5:
                deleteatbeg();
                break;  
            case 6:
                deleteatend();
                break;
            case 7:
                printf("Enter the position to delete the data at the position : ");
                scanf("%d",&p);
                deleteatkth(p);
                break;
            case 8:
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
    struct node *ptr ;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    ptr->prev = NULL;
    if(head == NULL){
        head = ptr;
        last = ptr;
    }
    else{
        ptr->prev = last;
        last->next = ptr;
        last = ptr;
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
}

//Function to insert an element at the beginning.
void insertatbeg(int x){
    struct node *ptr;
    ptr =(struct node *) malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    if(head==NULL){
        head = ptr;
        last = ptr;
    }
    else{
        ptr->next = head;
        head->prev = ptr;
        head=ptr;
    }
}

//Function to insert an element at the end.
void insertatend(int x){
    struct node *ptr ;
    ptr =(struct node *) malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    if(head==NULL){
        head = ptr;
        last = ptr;
    }
    else{
        last->next = ptr;
        ptr->prev = last;
        last = ptr;
    }
}

//Function to insert an element at the kth position.
void insertatkth(int x, int k){
    int i=1;
    struct node *ptr ,*temp=head, *prev= NULL;
    if(k==1){
        insertatbeg(x);
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
        if(i==(k-1) && temp->next==NULL){
            insertatend(x);
        }
        else if(i==k){
            ptr =(struct node *) malloc(sizeof(struct node));
            ptr->data = x;
            ptr->next = prev->next;
            (ptr->next)->prev = ptr;
            prev->next = ptr;
            ptr->prev = prev;
        }
        else{
            printf("\nThe position is out of list!");
        }
    }
}



//function to delete the node at beginning.
void deleteatbeg(){
    if(head == NULL){
        printf("List is empty");
    }
    else{
        printf("\nDeleted element is %d",head->data);
        head = head->next;
        free(head->prev);
        head->prev = NULL;
    }
}

//function to delete the node at the end.
void deleteatend(){
    if(head == NULL){
        printf("List is empty");
    }
    else{
        printf("\nDeleted element is %d",last->data);
        last = last->prev;
        free(last->next);
        last->next = NULL;
    }
}

//Function to delete a element at the kth position.
void deleteatkth(int k){
    int i=1;
    struct node *temp=head, *prev= NULL;
    if(k==1){
        deleteatbeg();
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
        if(i==(k-1) && temp->next==NULL){
            deleteatend();
        }
        else if(i==k){
            printf("\nDeleted element is %d",temp->data);
            prev->next = temp->next;
            (temp->next)->prev = prev;
            free(temp);
        }
        else{
            printf("\nThe position is out of list!");
        }
    }
}

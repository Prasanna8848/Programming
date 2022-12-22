#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int power;
    struct node* next;
};

struct headernode{
    int polyno;
    int number_terms;
    struct node* head ;
}header1 ,header2 ,header3;


void createpoly(struct headernode *,int , int);
void displaypolynomial(struct headernode *);
void sortdescending(struct headernode *);
void addpoly(struct headernode *,struct headernode *);


int main(){
    header1.head = NULL;
    header2.head = NULL;
    int n1 ,n2 , c, p, i;
    printf("\nEnter the no. of terms in the polynoimal 1 and 2 : ");
    scanf("%d %d",&n1 ,&n2);
    printf("\nFor Polynomial 1:");
    header1.polyno = 1;
    header1.number_terms = n1;
    printf("\nEnter the coeffecient and power : \n");
    for(i= 0;i<n1;i++){
        scanf("%d %d",&c,&p);
        createpoly(&header1,c,p);
    }
    sortdescending(&header1);
    displaypolynomial(&header1);
    printf("\nFor Polynomial 2:");
    header2.polyno = 2;
    header2.number_terms = n2;
    printf("\nEnter the coeffecient and power :  \n");
    for(i= 0;i<n2;i++){
        scanf("%d %d",&c,&p);
        createpoly(&header2,c,p);
    }
    sortdescending(&header2);
    displaypolynomial(&header2);
    addpoly(&header1 ,&header2 );
    printf("\n\nThe no of terms in the added polynomial is : %d",header3.number_terms);
    displaypolynomial(&header3);
}

void createpoly(struct headernode *header ,int c, int p){
    struct node *ptr, *temp = header->head;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->coef = c;
    ptr->power = p;
    ptr->next = NULL;
    if(temp == NULL){
        (header->head) = ptr;
    }
    else{
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void displaypolynomial(struct headernode *header){
    printf("\nFor polynomial no : %d\n",header->polyno);
    struct node *temp = header->head;
    if(temp==NULL){
        printf("\nNo elements in the linkedlist");
    }
    while(temp!=NULL){
        printf("%dX^%d",temp->coef,temp->power);
        if(temp->next!=NULL){
            printf(" + ");
        }
        temp = temp->next;
    }
}

void sortdescending(struct headernode *header){
    struct node *temp = header->head, *temp2;
    int coeff ,pow,bol;
    if(temp !=NULL){
        while(temp->next!=NULL){
            temp2 = header->head;
            bol =0;
            while(temp2->next!=NULL){
                if(temp2->power< (temp2->next)->power){    
                    coeff = temp2->coef;
                    pow = temp2->power;
                    temp2->coef = (temp2->next)->coef;
                    temp2->power = (temp2->next)->power;
                    (temp2->next)->coef = coeff;
                    (temp2->next)->power = pow;
                    bol++;
                }
                temp2 = temp2->next;
            }
            temp= temp->next;
            if(bol == 0){
                break;
            }
        }
    }

}

void addpoly(struct headernode *h1,struct headernode *h2){
    struct node *temp1 =h1->head, *temp2 = h2->head;
    header3.polyno=3;
    header3.head = NULL;
    int count=0, coeff;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->power==temp2->power){
            createpoly(&header3,(temp1->coef+temp2->coef),temp1->power);
            temp1=temp1->next;
            temp2=temp2->next;
            count++;
        }
        else{
            if((temp1->power) > (temp2->power)){
                createpoly(&header3,temp1->coef,temp1->power);
                temp1 = temp1->next;
                count++;
            }
            else{
                if((temp2->power)>(temp1->power)){
                createpoly(&header3,temp2->coef,temp2->power);
                temp2 = temp2->next;
                count++;
                }
            }
        }
        }
        while(temp1!=NULL){
            createpoly(&header3,temp1->coef,temp1->power);
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
        createpoly(&header3,temp2->coef,temp2->power);
            temp2 = temp2->next;
        }
        header3.number_terms = count;
}
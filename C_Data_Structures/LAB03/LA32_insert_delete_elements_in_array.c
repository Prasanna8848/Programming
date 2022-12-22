#include<stdio.h>
#include<stdlib.h>

int insert(int *,int );
int delete(int * ,int );
void main(){
    int n , i , bol=1; 
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int arr[50];
    printf("Enter the elements of an array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter 1 to insert a element");
    printf("\nEnter 2 to delete a element");
    printf("\nEnter 0 to exit from the program and display the elements :");
    while(bol!=0){
        printf("\nYour choice :");
        scanf("%d",&bol);
        switch(bol){
            case 0 :
            break;
            case 1 :
            n = insert(arr ,n);
            break;
            case 2 :
            n =delete(arr ,n);
            break;
            default:
            printf("\nReenter your choice!!");
            break;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
}

int insert(int *a,int n){
    int i ,k ,e;
    printf("Enter the element and position to insert inside the array :");
    scanf("%d %d",&e,&k);
    if(k>n){
        printf("The position is outside the size of array!!!");
        return n;
        exit(0);
    }
    else{

        for(i=n;i>k;i--){
            a[i]=a[i-1];
        }
        a[k] =e;
        printf("\nInsertion successful!!!!!!");
        return ++n;
    }
}

int delete(int *a ,int n){
    int i ,k;
    printf("Enter the element position to delete the element :");
    scanf("%d",&k);
    if(k>n){
        printf("The position is outside the size of array!!!");
        return n;
        exit(0);
    }
    else{

        for(i=k ;i<n-1;i++){
            a[i]=a[i+1];
        }
        printf("\nDeletion successful!!!!!!");
        return --n;
    }
}
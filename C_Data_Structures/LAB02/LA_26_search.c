#include<stdio.h>
#include<stdlib.h>

int main(){
    int *aptr ,n ,i ,bol ,temp ,search;
    printf("\n\nEnter the number of elements to be stored in array: ");
    scanf("%d",&n);
    aptr = (int*) malloc(n* sizeof(int));
    printf("\nEnter the elements of the array :");
    for (i =0 ; i<n ;i++){
        scanf("%d",(aptr+i));
    }
    printf("Enter the element to search :");
    scanf("%d",&search);
    bol =0;
    for(i =0 ; i<n ;i++){
        if(*(aptr+i)== search){
            bol++;
            printf("\nElement found in index %d",i+1);
        }
    }
     if (bol >0){
            printf("\n\nElement %d found %d times!!",search,bol);
        }
        else{
            printf("\nElement not found!!!!!");
        }
}
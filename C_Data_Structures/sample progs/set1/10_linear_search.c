#include<stdio.h>

void main(void){
    int n ,i ,b ,bol=0;
    printf("\nEnter the number of elements inn the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for(i=0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be found in the array : ");
    scanf("%d",&b);
    for(i=0 ; i<n;i++){
        if(arr[i] ==b){
            printf("\nElement found in %d position",(i+1));
            bol++;
        }
    }
    if(bol ==0){
        printf("\nElement not found!");
    }
    else{
        printf("\nElement %d found in %d places in the given array",b,bol);
    }
}
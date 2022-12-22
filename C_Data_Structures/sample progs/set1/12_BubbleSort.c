#include<stdio.h>

void sort(int * ,int);

void main(void){
    int n ,i;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for (i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr , n);
    printf("\nElements of the array : ");
    for (i=0; i<n;i++){
        printf(" %d",arr[i]);
    }
}

void sort(int *a , int n){
    int i , j , bol , temp;
    for(i = 0 ; i<(n-1) ;i++){
        bol =0;
        for(j = 0; j < (n-1); j++){
            if(*(a+j)>*(a+j+1)){
                temp = *(a+j+1);
                *(a+j+1) = *(a+j);
                *(a+j) = temp;
                bol++;
            }
        }
        if(bol==0){
            break;
        }
    }
}
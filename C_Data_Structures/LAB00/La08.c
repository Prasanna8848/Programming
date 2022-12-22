#include<stdio.h>

void swap(int * ,int);

void main(){
    int n ,i;
    printf("\nEnter the number of elements to be included in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nEnter the elements of the array :");
    for (i = 0 ; i < n; i++){
        scanf("%d",&arr[i]);
    }
    swap(arr ,n);
    printf("\n\nElemnts of the array after swapping:");
    for (i = 0 ; i < n; i++){
        printf(" %d",arr[i]);
    }
}


void swap(int *array ,int n){
    int i ,  j= (n-1) ,temp;
    for (i =0 ;i< (n/2) ; i++){
        temp =*(array + i);
        *(array + i) = *(array+j);
        *(array + j) = temp;
        j--;
    }
}
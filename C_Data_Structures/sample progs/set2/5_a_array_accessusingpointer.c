#include<stdio.h>
#include<stdlib.h>

void main(void){
    int n, i ,*arr;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    arr = (int *) malloc(n*sizeof(int));
    printf("Enter the elements of the array :");
    for (i = 0;i<n ;i++){
        scanf("%d",(arr+i));
    }
    printf("The elements of the array is : ");
    for (i = 0;i<n ;i++){
        printf("%d ",*(arr+i));
    }
}
#include<stdio.h>

void rotate(int * , int );

void main(){
    int n,i ,r;
    printf("Enter the no. of elements in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of times to rotate the array :");
    scanf("%d",&r);
    for(i =0 ;i<r;i++){
        rotate(arr , n);
    }
    printf("\nElements of the array are:");
    for(i=0 ;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void rotate(int *a,int n){
    int temp ,i;
    temp = *(a+n-1);
    for(i=n-1; i>0 ;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
}
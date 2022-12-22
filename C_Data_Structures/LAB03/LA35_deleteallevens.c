#include<stdio.h>

int delete(int * ,int , int );

void main(){
    int n , i , bol=1; 
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int arr[50];
    printf("Enter the elements of an array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            n=delete(arr ,n, i);
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int delete(int *a ,int n, int k){
    int i ;
    for(i=k ;i<n-1;i++){
        a[i]=a[i+1];
    }
    return --n;
}
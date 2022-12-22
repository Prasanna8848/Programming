#include<stdio.h>

void main(){
    int i , j, n, even=0, temp;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2 ==0){
            temp =arr[i];
            for(j=i;j>even;j--){
                arr[j]=arr[j-1];
            }
            arr[even]=temp;
            even++;
        }
    }
    for(i=0; i<n;i++){
        printf(" %d",arr[i]);
    }
}
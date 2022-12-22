#include<stdio.h>

int shiftelement(int *,int , int);

int main(){
    int n ,i;
    printf("Enter the no. of elements in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array :");
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n;i++){
        if(arr[i]%2==0 && arr[i]%5==0){
            arr[i]=-1;
        }
    }
    for(i=0; i<n;i++){
        if(arr[i]==-1){
            n=shiftelement(arr,n,i);
            i--;
        }
    }
    printf("\nElements of an array are : ");
    for(i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
}

int shiftelement(int *arr, int n, int i){
    for(i=i;i<n;i++){
        arr[i]=arr[i+1];
    }
    return --n;
}
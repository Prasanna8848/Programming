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

void swap(int *a, int n){
    int i, j, adb=0 , adl=0 ,temp;
    for (i=1; i < n ; i++){
        if (a[adl]>a[i]){
            adl= i;
        }
        if(a[adb]<a[i]){
            adb = i;
        }
    }
    temp = a[adb];
        a[adb]= a[adl];
        a[adl]=temp;
}
#include<stdio.h>

int same(int *, int , int );

void main(){
    int n ,i , counter = 1, bol ;
    printf("\nEnter the number of elements to be included in the array :");
    scanf("%d",&n);
    int arr[n] , finalarr[n];
    printf("\n\nEnter the elements of the array :");
    for (i = 0 ; i < n; i++){
        scanf("%d",&arr[i]);
    }
    finalarr[0] =arr[0];
    for (i = 1 ; i < n; i++){
        bol = same(finalarr , counter ,arr[i] );
        if (bol == 0){
            finalarr[counter] = arr[i];
            counter++;
        }
    }
    printf("\n\nElemnts of the array after removing repeated ones :");
    for (i = 0 ; i < counter; i++){
        printf(" %d",finalarr[i]);
    }
}


int same(int *array ,int n ,int value){
    int i ,boleen;
    for (i =0 ;i<n ; i++){
        if (value == *(array + i)){
            return 1;
            break;
        }
    }
    return 0;
}
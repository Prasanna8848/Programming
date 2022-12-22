#include<stdio.h>
#include<stdlib.h>

int main(){
    int *aptr ,n ,i ,o, temp;
    printf("\n\nEnter the number of elements to be stored in array: ");
    scanf("%d",&n);
    aptr = (int*) malloc(n* sizeof(int));
    o=n-1;
    printf("\nEnter the elements of the array :");
    for (i =0 ; i<n ;i++){
        scanf("%d",(aptr+i));
    }
    for(i =0 ; i<((n-1)/2) ;i++){
        temp =*(aptr+i);
        *(aptr+i) =*(aptr+o);
        *(aptr+o) = temp;
        o--;
    }
    printf("\nElements of the array after reversing :");
    for (i =0 ; i<n ;i++){
        printf("%d ",*(aptr+i));
    }
}
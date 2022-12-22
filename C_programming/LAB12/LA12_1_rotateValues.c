#include<stdio.h>

void swap(int *, int *, int *);

int main(){
    int a , b , c ;
    printf("\n\nEnter the three numbers to swap :");
    scanf("%d %d %d", &a , &b , &c);
    printf("Before Swap:\n");
    printf("a = %d , b = %d , c = %d\n\n ",a,b,c);
    swap(&a , &b , &c);
    printf("After Swap:\n");
    printf("a = %d , b = %d , c = %d\n\n ",a,b,c);
    return 0;
}


void swap(int *x, int *y, int *z){
    int temp;
    temp = *x;
    *x = *z;
    *z =*y;
    *y = temp;
}
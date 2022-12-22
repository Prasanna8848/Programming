#include<stdio.h>

void fibonacci(int );

void main(void){
    int num;
    printf("\nEnter the number upto which to find fibonacci series : ");
    scanf("%d",&num);
    fibonacci(num);
}

void fibonacci(int n){
    int a=0, b=1 ,temp, i;
    printf("\nFibonacci Series : ");
    for(i = 1 ; i<=n ; i++){
        printf(" %d",b);
        temp = b;
        b = a + b;
        a = temp;
    }
}
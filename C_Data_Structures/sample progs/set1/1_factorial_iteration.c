#include<stdio.h>

int factorial(int);

void main(void){
    int num , fact;
    printf("\nEnter an positive integer to find factorial : ");
    scanf("%d",&num);
    fact = factorial (num);
    printf("\nThe factorial of the number %d is %d",num , fact);
}

int factorial(int n){
    int i , f=1;
    for(i=2;i<=n;i++){
        f *= i;
    }
    return f;
}
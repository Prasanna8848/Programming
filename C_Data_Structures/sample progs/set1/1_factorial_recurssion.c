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
    if(n ==0||n==1){
        return 1;
    }
    return (n*factorial(n-1));
}
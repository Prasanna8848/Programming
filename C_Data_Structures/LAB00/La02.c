#include<stdio.h>

int factorial(int);
void main(){
    int a , fact;
    printf("\nEnter any one number to find the factorial :");
    scanf("%d",&a);
    fact = factorial(a);
    printf("The factorial of the number %d is %d.",a,fact);
}

int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    return (x * factorial(x-1));
}
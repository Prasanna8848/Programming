#include<stdio.h>

void main(void){
    int a,b;
    printf("Enter any two numbers : ");
    scanf("%d %d",&a,&b);
    printf("\nData before swapping is \n a = %d and b = %d ",a,b);
    a =a*b;
    b=a/b;
    a= a/b;
    printf("\nData after swapping is  \n a = %d and b = %d ",a,b);
}
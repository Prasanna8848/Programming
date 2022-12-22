#include<stdio.h>

int gcd(int ,int);

void main(void){
    int num1 ,num2 ,gc;
    printf("Enter two numbers to find their gcd : ");
    scanf("%d %d",&num1,&num2);
    gc = gcd(num1 ,num2);
    printf("The gcd of numbers %d and %d is : %d",num1 ,num2,gc);
}

int gcd(int n1 , int n2){
    int i ,temp, g;
    if (n1 > n2){
        temp =n1;
        n1 = n2;
        n2 =n1;
    }
    for(i=1 ; i<=n1;i++){
        if(n1%i ==0 && n2% i ==0){
            g =i;
        }
    }
    return g;
}
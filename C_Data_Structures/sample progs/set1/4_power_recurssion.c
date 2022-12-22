#include<stdio.h>

float power(float, int);

void main(void){
    float num , pwr;
    int pow;
    printf("Enter the number and power : ");
    scanf("%f %d",&num , &pow);
    pwr = power(num ,pow);
    printf("\n\n%.1f ^ %d = %.1f",num,pow,pwr);
}

float power(float n ,int p){
    if(p==0){
        return 1;
    }
    if(p==1){
        return n;
    }
    return n*(power(n,--p));
}
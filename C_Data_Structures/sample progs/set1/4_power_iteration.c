#include<stdio.h>

float power(float, float);

void main(void){
    float num , pow , pwr;
    printf("Enter the number and power : ");
    scanf("%f %f",&num , &pow);
    pwr = power(num ,pow);
    printf("\n\n%.1f ^ %.1f = %.1f",num,pow,pwr);
}

float power(float n ,float p){
    int i;
    float out = 1;
    for( i = 1; i <=p; i++ ){
        out *= n;
    }
    return out;
}

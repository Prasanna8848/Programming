#include<stdio.h>

void power(float , int , float *);

int main(){
    int m ;
    float a , result;
    printf("\n\nEnter the value of integer and the power to which it will be raised :");
    scanf("%f %d",&a , &m);
    power(a , m , &result);
    printf("The result is : %.3f\n\n",result);
    return 0;
}

void power( float x , int y , float *r){
    int i;
    *r = 1.0;
    for (i = 0; i<y ; i++){
        *r *= x;
    }    
}
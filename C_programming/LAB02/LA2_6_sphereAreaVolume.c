#include<stdio.h>
const float pi=3.14;
int main(){

float r3439 , sa3439, v3439;
printf("\nEnter the radius of the sphere :");
scanf("%f",&r3439);
sa3439 = 4 * pi * r3439 * r3439 ;
printf("The surface area of the sphere with radius %.1f is %.2f", r3439, sa3439 );
v3439 = (4/3) * pi * r3439 * r3439 * r3439;
printf("\nThe volume of the sphere with radius %.1f is %.2f\n\n", r3439, v3439 );
return 0;
}
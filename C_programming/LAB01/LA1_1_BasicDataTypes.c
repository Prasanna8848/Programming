#include<stdio.h>

int main(){

    int a3439;
    short int b3439;
    long int c3439;
    float d3439;
    double e3439;
    char f3439;
    printf("Enter any integer: ");
    scanf("%d",&a3439);
    printf("Enter any short integer: ");
    scanf("%hd",&b3439);
    printf("Enter any long integer: ");
    scanf("%ld",&c3439);
    printf("Enter any decimal point number: ");
    scanf("%f",&d3439);
    printf("Enter any longer decimal point number: ");
    scanf("%lf",&e3439);
    printf("Enter any character: ");
    scanf(" %c",&f3439);
    printf("\n\n");
    printf("The integer is : %d\n", a3439);
    printf("The short integer is : %d\n", b3439);
    printf("The long integer is : %ld\n", c3439);
    printf("The float is : %f\n", d3439);
    printf("The double is : %f\n", e3439);
    printf("The character is : %c\n", f3439);
    return 0;
}

#include<stdio.h>

void main(void){
    float a , b , out;
    int bol =1;
    printf("\nEnter any two numbers :");
    scanf("%f %f",&a ,&b);
    printf("\nPress 1 to add two numbers.");
    printf("\nPress 2 to subtract two numbers.");
    printf("\nPress 3 to multiply two numbers.");
    printf("\nPress 4 to divide two numbers.");
    printf("\nPress 0 to end the program");
    while (bol!=0){
        printf("\nEnter your choice :");
        scanf("%d",&bol);
        switch (bol){
        case 1:
            out =a+b;
            printf(" %.1f + %.1f = %.1f",a,b,out);
            break;
        case 2:
            out =a-b;
            printf(" %.1f - %.1f = %.1f",a,b,out);
            break;
        case 3:
            out =a*b;
            printf(" %.1f * %.1f = %.1f",a,b,out);
            break;   
        case 4:
            out =a/b;
            printf(" %.1f / %.1f = %.1f",a,b,out);
            break; 
        case 0:
        break;
        default:
        printf("Enter the choice again(0-4)");
            break;
        }
    }
}
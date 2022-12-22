#include<stdio.h>

int main(){
    int num3439, sum3439 = 0 , iter3439;
    printf("\n\nEnter a integer to get the sum of its digit : ");
    scanf("%d", &num3439);
    iter3439 =num3439;
    while (iter3439 != 0){
        sum3439 +=(iter3439%10);
        iter3439 /=10;
    }
    printf("Sum of the digits in the number %d is %d .\n\n", num3439 , sum3439);
    return 0;
}
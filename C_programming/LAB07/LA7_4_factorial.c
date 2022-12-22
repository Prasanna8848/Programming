#include<stdio.h>
    int main(){
        int num3439, factorial3439 = 1 , iter3439;
        printf("\n\nEnter a number to get the factorial : ");
        scanf("%d", &num3439);
        iter3439 = num3439;
        if (num3439 ==0){
            factorial3439 = 1;
            printf("factorial of the number %d is %d\n\n", num3439 , factorial3439);
        }
        else if (num3439 >0){
            while (iter3439 != 0){
            factorial3439 *=iter3439;
            iter3439 -=1;
        }
        printf("factorial of the number %d is %d\n\n", num3439 , factorial3439);
        }
        else{
        printf("Invalid Input!");
        }
    return 0;
    }
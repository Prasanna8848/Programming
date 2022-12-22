#include <stdio.h>

int main() {
    int num3439;
    printf("\n\nEnter any number : ");
    scanf("%d", &num3439);
    if (num3439 % 7==0){
        printf("The number %d is a Buzz Number.",num3439);
    }
    else if (((num3439%100)%10)==7){
        printf("The number %d is a Buzz Number.",num3439);
    }
    else{
        printf("The number %d is not a Buzz Number.",num3439);
    }
    return 0;
    }
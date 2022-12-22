#include<stdio.h>

int main(){
    int x3439, y3439;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x3439, &y3439);
    x3439 = x3439 + y3439;
    y3439 = x3439 - y3439;
    x3439 = x3439 - y3439;
    printf("The variable are swapped as %d and %d .\n\n", x3439, y3439);

    return 0;
}
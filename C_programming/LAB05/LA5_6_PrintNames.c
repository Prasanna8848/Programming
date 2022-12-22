#include<stdio.h>

int main(){
    int num3439;
    printf("\n\nEnter number of times you want to display name : ");
    scanf("%d", &num3439);
    while (num3439 != 0){
        printf("Prasanna Dhungana\n");
        num3439 -=1;
    }
    printf("\n\n");
    return 0;
}
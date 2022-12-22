#include <stdio.h>

int main() {
    int a3439, al3439;
    printf("\n\nEnter a integer : ");
    scanf("%d",&a3439);
    al3439 = a3439 % 2;
    if(al3439 == 1){
        printf("The entered number %d is odd.\n\n",a3439);
    }
    else{
        printf("The entered number %d is even.\n\n",a3439);
    }
    return 0;
}

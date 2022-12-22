#include <stdio.h>

int main() {
    int a3439,b3439,c3439,min3439 ;
    printf("\n\nEnter any three distinct integers :\n");
    scanf("%d %d %d",&a3439 , &b3439 , &c3439);
    min3439 = a3439;
    if (min3439 > b3439){
        min3439 = b3439;
    }
    if ( min3439 > c3439){
        min3439 = c3439;
    }

    printf("The smallest integer between %d , %d and %d is %d .\n\n", a3439 , b3439 , c3439, min3439);
    return 0;
}

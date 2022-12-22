#include <stdio.h>

int main() {
    int m3439,km3439 , ml3439;
    printf("\n\nEnter the length in meter : ");
    scanf("%d",&m3439);
    km3439 = m3439 / 1000;
    ml3439 = m3439 % 1000;
    printf("The %d meter is equal to %d Km and %d Meter.",m3439 , km3439 , ml3439);
    return 0;
}

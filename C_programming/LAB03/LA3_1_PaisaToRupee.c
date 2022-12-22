#include <stdio.h>

int main() {
    int p3439,r3439 , pl3439;
    printf("\n\nEnter the paisa to convert : ");
    scanf("%d",&p3439);
    r3439 = p3439 / 100;
    pl3439 = p3439 % 100;
    printf("The %d paisa is equal to %d Rupee and %d paisa.\n\n",p3439 , r3439 , pl3439);
    return 0;
}

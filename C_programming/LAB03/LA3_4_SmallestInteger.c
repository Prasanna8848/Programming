#include <stdio.h>

int main() {
    int a3439,b3439 ;
    printf("\n\nEnter any two distinct integers :\n");
    scanf("%d %d",&a3439 , &b3439);
    if (a3439 != b3439){
        if (a3439 > b3439){
            printf("The smallest integer between %d and %d is %d .\n\n",a3439,b3439,b3439);
        }
        else{
            printf("The smallest integer between %d and %d is %d .\n\n",a3439,b3439,a3439);
        }}
    else{
        printf("The integers are not distinct.");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i3439 ,j3439 ,n3439;
    printf("\n\nEnter the number of rows :");
    scanf("%d", &n3439);
    if (n3439 < 1){
        printf("Invalid Input");
    }
    for (i3439 = 1 ; i3439 <= n3439 ; i3439++){
        for(j3439=1 ; j3439 <= i3439 ; j3439++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main(){
    //program to display sum of the series.
    int i3439 ,j3439 ,n3439 , sum3439 = 0;
    printf("\n\nEnter the last term of the series :");
    scanf("%d", &n3439);
    if (n3439 < 0){
        printf("Invalid Input");
    }
    for (i3439 = 1 ; i3439 <= n3439 ; i3439++){
        for(j3439=1 ; j3439 <= i3439 ; j3439++){
            sum3439 += j3439 ; 
        }
    }
    printf("The sum of series upto %d is %d .\n\n", n3439, sum3439);
    return 0;
}

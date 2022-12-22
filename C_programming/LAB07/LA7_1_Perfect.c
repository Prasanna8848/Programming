#include <stdio.h>

int main() {
    int num3439  , count3439 , sum3439 =1;
    printf("\n\nEnter any number :");
    scanf("%d",&num3439);
    for (count3439 =2 ; count3439< num3439 ; count3439++ ){
        if (num3439%count3439 ==0){
            sum3439 +=count3439;
        }
    }
    if (sum3439 == num3439){
        printf("%d is a perfect number.\n\n",num3439);
    }
    else{
    printf("%d is not a perfect number.\n\n",num3439);
    }
    return 0;
}
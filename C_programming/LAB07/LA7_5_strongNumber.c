#include<stdio.h>
    int main(){
        int num3439,num23439, factorial3439 = 1 , iter3439 ,sum3439=0;
        printf("\n\nEnter a number : ");
        scanf("%d", &num3439);
        num23439 = num3439;
          while (num23439!=0){
            iter3439 = (num23439%10);
            num23439 /= 10;
            while (iter3439 != 0){
              factorial3439 *=iter3439;
              iter3439 -=1;
            }
            sum3439 +=factorial3439;
            factorial3439 =1;
            }
          if (sum3439 == num3439){
        printf("%d is a strong number.\n\n", num3439);
        }
        else{
        printf("%d is not a strong number.\n\n", num3439);
        }
    return 0;
    }
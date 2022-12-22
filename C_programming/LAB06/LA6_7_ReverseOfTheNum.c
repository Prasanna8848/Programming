#include <stdio.h>

int main(){
    //program to display reverse of the number.
    int n3439, out3439 = 0, temp3439 =0 , count3439=0;
    printf("\n\nEnter the number to be reversed :");
    scanf("%d", &n3439);
    while (n3439 != 0){
        temp3439 = (n3439 % 10);
        out3439 = (out3439 * 10) + temp3439 ;
        n3439 /= 10;
        count3439 +=1;
    }
    printf("The reversed number is %.*d \n\n",count3439 ,out3439);
    printf("\n\n");
    return 0;
}

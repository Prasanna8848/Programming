#include<stdio.h>
    int main(){
        int i3439 , j3439,num3439 , sum3439=0 ;
        printf("\n\nEnter the number of integers to be added: ");
        scanf("%d",&num3439);
        int arr3439[num3439];
        printf("Enter any %d integers:", num3439);
        for ( i3439 =0 ; i3439 < num3439 ; i3439++){
            scanf("%d", &arr3439[i3439]);
        }
        for ( j3439 = 0 ; j3439 < num3439 ; j3439++){
            sum3439 += arr3439[j3439];
        }
        printf("The sum of %d numbers is : %d\n\n",num3439 , sum3439);
    return 0;
    }
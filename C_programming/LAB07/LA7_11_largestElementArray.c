#include<stdio.h>
    int main(){
        int i3439 , j3439 , num3439 ,larg3439 = 0;
        printf("\n\nEnter the number of integers to be added in array: ");
        scanf("%d",&num3439);
        int arr3439[num3439];
        printf("Enter any %d integers:\n", num3439);
        for ( i3439 =0 ; i3439 < num3439 ; i3439++){
            scanf("%d", &arr3439[i3439]);
        }
        for ( j3439 = 0 ; j3439 < num3439 ; j3439++){
            if (arr3439[j3439]>larg3439){
                larg3439 = arr3439[j3439];
            }
        }
        printf("The largest of %d numbers is : %d\n",num3439 , larg3439);
    return 0;
    }

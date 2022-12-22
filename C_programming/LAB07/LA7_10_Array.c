#include<stdio.h>
    int main(){
        int i3439 , j3439 ;
        int arr3439[50];
        printf("\n\nTo store and print 50 integers from array.\n\n");
        for ( i3439 =0 ; i3439 < 50 ; i3439++){
            arr3439[i3439] = (i3439 + 51);
        }
        for ( j3439 = 0 ; j3439 < 50 ; j3439++){
            printf("Element %d is : %d\n",(j3439 + 1), arr3439[j3439]);
        }
    return 0;
    }
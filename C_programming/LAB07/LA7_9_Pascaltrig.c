#include <stdio.h>

int main(){
    int rows3439 ,n3439, r3439 , space3439 , c3439=1 ;
    printf("Enter the number of rows of pascal triangle to be displayed :");
    scanf("%d",&rows3439);
    for (n3439 = 1 ; n3439<=rows3439 ; n3439++){
        c3439=1;
        for (space3439 = (rows3439-n3439); space3439 >=1; space3439--){
            printf(" ");
        }
        for (r3439 =1 ; r3439<=n3439 ; r3439++){
            printf("%d ",c3439);
            c3439 = (c3439*(n3439-r3439)) /r3439 ;
        }
        printf("\n");
    }
}
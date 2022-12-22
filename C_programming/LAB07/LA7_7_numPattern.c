#include<stdio.h>
    int main(){
        int numrows3439 , numcol3439,num3439 ;
        printf("Enter now of rows: ");
        scanf("%d",&num3439);
        for (numrows3439 =1 ;numrows3439 <= num3439 ; numrows3439++ ){
            if (numrows3439%2==0){
                for (numcol3439= numrows3439; numcol3439>0;numcol3439--){
                printf("%d ",numcol3439);
            }
            }
            else{
                for (numcol3439= 1; numcol3439<=numrows3439;numcol3439++){
                printf("%d ",numcol3439);
                }
            }
          printf("\n");
          }
      printf("\n");
    return 0;
    }
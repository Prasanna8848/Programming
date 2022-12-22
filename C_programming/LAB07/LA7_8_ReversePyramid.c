#include<stdio.h>
    int main(){
        int numrows3439 , numcol13439,numcol23439,num3439,spac3439 ;
        printf("Enter now of rows: ");
        scanf("%d",&num3439);
        for (numrows3439 =num3439 ;numrows3439 >0 ; numrows3439-- ){
            for (spac3439=(num3439-numrows3439); spac3439>0; spac3439--){
                printf("  ");
            }
                for (numcol13439= 1; numcol13439<=numrows3439;numcol13439++){
                printf("%d ",numcol13439);
                }
                for (numcol23439= (numrows3439-1); numcol23439>=1;numcol23439--){
                printf("%d ",numcol23439);
                }
          printf("\n");
          }
      printf("\n");
    return 0;
    }
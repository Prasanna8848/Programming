#include<stdio.h>
    int main(){
        int numrows3439 , numcol3439,num3439 ;
        char asc = 64;
        printf("Enter now of rows: ");
        scanf("%d",&num3439);
        for (numrows3439 =1 ;numrows3439 <= num3439 ; numrows3439++ ){
          asc +=numrows3439;
          for (numcol3439 = numrows3439 ; numcol3439>0 ; numcol3439--){
          printf("%c ",asc);
          asc -=1;
        }
          printf("\n");
          }
      printf("\n");
    return 0;
    }
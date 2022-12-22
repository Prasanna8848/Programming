#include <stdio.h>

int main(){
    int i , j, k ,m ,sum =0;
    printf("\n\nEnter the dimension n of square matrix (Note: Rows = columns) :");
    scanf("%d",&m);
        int arr[m][m];
        printf("Enter the elements of matrix :\n");
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<m ; j++){
                scanf("%d",&arr[i][j]);
            }
          printf("\n");
        }
      for (i=0 ; i<m ; i++){
              sum += arr[i][i];
            }
      printf("Sum of the diagonal elements of the given square matrix is : %d\n\n",sum);
    return 0;
}
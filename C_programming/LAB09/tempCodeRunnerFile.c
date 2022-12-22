#include <stdio.h>

int main(){
    int i , j, k ,m , n , flag =0;
    printf("\n\nEnter the dimension of matrix  :");
    scanf("%d,%d",&m ,&n);
    if (m==n){
        int arr[m][n];
        printf("Enter the elements of matrix :\n");
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                scanf("%d",&arr[i][j]);
            }
          printf("\n");
        }
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                if ((arr[j][i]) == (arr[i][j])){
                  flag+=1;
                }
            }
        }
        if (flag == (m*n)){
            printf("The given matrix is symmetric.\n\n");
        }
        else{
          printf("The given matrix is not symmetric.\n\n");
        }
        }
  else{
    printf("matrix dimensions are not same, it is not symmetric.\n\n ");
  }
    return 0;
}
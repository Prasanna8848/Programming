#include <stdio.h>

int main(){
    int i , j, k ,m , n;
    printf("\n\nEnter the dimension of matrix (Note: Rows != columns) :");
    scanf("%d,%d",&m ,&n);
    if (m!=n){
        int arr1[m][n];
        int arr2[n][m];
        printf("Enter the elements of matrix :\n");
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                scanf("%d",&arr1[i][j]);
            }
          printf("\n");
        }
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                arr2[j][i]=arr1[i][j];
            }
        }
      printf("Transpose of the given matrix is :\n");
      for (i=0 ; i<n ; i++){
            for (j=0 ; j<m ; j++){
            printf("%d\t",arr2[i][j]);
              }
        printf("\n");
        }
        printf("\n\n");
    }
  else{
    printf("matrix dimensions are same, Try other value!!!!! \n\n");
  }
    return 0;
}
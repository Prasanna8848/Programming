#include <stdio.h>

int main(){
    int i , j, k ,m , n, sum =0;
    printf("\n\nEnter the dimension of matrix (Note: Rows != columns) :");
    scanf("%d,%d",&m ,&n);
    if (m!=n){
        int arr[m][n];
        printf("Enter the elements of matrix :\n");
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                scanf("%d",&arr[i][j]);
            }    
        }
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                sum += arr[i][j];
            }
        }
        printf("The sum of the elements stored in the array is : %d\n\n", sum);
    }
  else{
    printf("matrix dimensions are same, Try other value!!!!! \n\n");
  }
    return 0;
}
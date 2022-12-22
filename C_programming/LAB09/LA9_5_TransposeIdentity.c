#include <stdio.h>

int main(){
    int i , j, k ,m , n ,sum ,flag =0;
    printf("\n\nEnter the dimension of matrix (Note: Rows = columns) :");
    scanf("%d,%d",&m ,&n);
    if (m==n){
        int arr1[m][n];
        int arrT[n][m];
        int arrM[n][m] ;
        printf("Enter the elements of matrix :\n");
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                scanf("%d",&arr1[i][j]);
            }
          printf("\n");
        }
        for (i=0 ; i<m ; i++){
            for (j=0 ; j<n ; j++){
                arrT[j][i]=arr1[i][j];
            }
        }
        for  (i=0 ; i<m ; i++){
          for (k=0 ; k<n ; k++){
            arrM[i][k] =0;
            for (j=0 ; j<n ; j++){
                arrM[i][k] += (arr1[i][j])*(arrT[j][k]);
            }
            if ((arrM[i][k]==0)||(arrM[i][i]==1)){
                  flag += 0;
            }
            else{
                flag +=1;
            }
          }
        }
        if (flag==0){
        printf("The given matrix is orthogonal.:\n");
        }
        else{
          printf("The given matrix is not orthogonal.:\n");
        }
      }
    else{
    printf("matrix dimensions are not the same, Try similar values!!!!! ");
  }
    return 0;
}
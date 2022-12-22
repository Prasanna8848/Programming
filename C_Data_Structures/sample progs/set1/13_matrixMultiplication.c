#include<stdio.h>

void main(void){
    int m ,n ,o , i ,j ,k;
    printf("Enter the size of matrix A (m*n) :");
    scanf("%d %d",&m,&n);
    int arr1[m][n];
    printf("Enter the elements of first array of dimension %d*%d :\n",m,n);
    for ( i=0 ;i<m; i++){
        for(j=0; j<n ;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the size of matrix b (%d*n) :",n);
    scanf("%d",&o);
    int arr2[n][o];
    printf("Enter the elements of second array of dimension %d*%d :\n",n,o);
    for ( i=0 ;i<n; i++){
        for(j=0; j<o ;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int outarr[m][o];
    //matrix multiplication
    for(i=0;i<o;i++){
        for(j=0;j<n;j++){
            outarr[j][i] =0;
            for(k=0;k<m;k++){
                outarr[j][i] +=(arr1[j][k]* arr2[k][i]);
            }
        }
    }
    printf("The elements of matrix of multiplication :\n");
    for ( i=0 ;i<m; i++){
        for(j=0; j<o ;j++){
            printf("%d ",outarr[i][j]);
        }
        printf("\n");
    }
}
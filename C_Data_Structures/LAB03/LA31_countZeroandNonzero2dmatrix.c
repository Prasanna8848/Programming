#include<stdio.h>

void main(){
    int m, n, i ,j , e0=0 , ne0=0;
    printf("Enter the dimension of 2D matrix : ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of 2D matrix :");
    int arr[m][n];
    for (i =0;i<m;i++){
        for(j=0; j<n ;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i =0;i<m;i++){
        for(j=0; j<n ;j++){
            if(arr[i][j]==0){
                e0++;
            }
            else{
                ne0++;
            }
        }
    }
    printf("\nThe number of non zero elements in the array are : %d",ne0);
    printf("\nThe number of zero elements in the array are : %d",e0);
}
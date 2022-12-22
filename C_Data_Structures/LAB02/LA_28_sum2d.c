#include<stdio.h>
#include<stdlib.h>

int main(){
    int *aptr ,m , n ,i ,j,sum = 0 ;
    printf("\n\nEnter the dimension of 2d array (m*n): ");
    scanf("%d %d",&m,&n);
    aptr = (int*) malloc((m*n) * sizeof(int));
    printf("\nEnter the elements of the array :");
    for (i =0 ; i<(m*n) ;i++){
        scanf("%d",(aptr+i));
    }
    for(i =0 ; i<m ;i++){
        for(j =0; j<n ;j++){
            sum += *(aptr+(i*m)+j);
        }
    }
    printf("The sum of elements in 2d dynamic array is : %d",sum);
}
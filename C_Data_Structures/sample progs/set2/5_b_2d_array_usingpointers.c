#include<stdio.h>
#include<stdlib.h>

void main(void){
    int r,c, i ,j,*arr;
    printf("Enter the number of elements in the array (R*C) :");
    scanf("%d %d",&r,&c);
    arr = (int *) malloc((r*c)*sizeof(int));
    printf("Enter the elements of the array :\n");
    for (i = 0;i<r ;i++){
        for(j=0;j<c;j++){
            scanf("%d",(arr+(i*c)+j));
        }
    }
    printf("The elements of the array is : \n");
    for (i = 0;i<r ;i++){
        for(j=0;j<c;j++){
            printf("%d  ",*(arr+(i*c)+j));
        }
        printf("\n");
    }
}
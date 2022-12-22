#include<stdio.h>
#include<stdlib.h>

int main(){
  int *a;
  int n,i;
  printf("\n\nEnter the number of elements to be entered in memory: \n");
  scanf("%d",&n);
  if ((a = (int*) malloc(n*sizeof(int)))!= NULL){
    printf("Enter %d integers to be stored in memory :\n",n);
    for (i=0 ; i < n ; i++){
        scanf("%d", (a+i));
    }
    printf("\nIntegers stored in memory are: \n");
    for (i=0 ; i < n ; i++){
        printf(" character :%d \n", *(a+i));
    }
    free(a);
    }
    else{
        printf("Not enough memory!");
    }
}
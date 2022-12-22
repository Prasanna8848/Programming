#include<stdio.h>
#include<stdlib.h>

int *sort(int ,int *);

int main(){
  int *a, *out , *s;
  int n,i;
  printf("\n\nEnter the number of elements to be entered in memory: \n");
  scanf("%d",&n);
  if ((a = (int*) malloc(n*sizeof(int)))!= NULL){
    printf("Enter %d integers to be stored in memory :\n",n);
    for (i=0 ; i < n ; i++){
        scanf("%d", (a+i));
    }
    sort(n , a);
        printf("\nSorted elements are: \n");
    for (i=0 ; i < n ; i++){
        printf(" Element :%d \n", *(a+i));
    }
    free(a);
    }
    else{
        printf("Not enough memory!");
    }
}

int *sort(int num , int *a){
    int j ,c ,temp , *m;
    for (j = 0 ; j <(num-1) ; j++ ){
        c =j+1;
        temp =*(a+c);
        while (( *(a+c-1) > temp)&& (c>0)){
            *(a+c) = *(a+c-1);
            c--;
        }
        *(a+c) =temp;
    }
}
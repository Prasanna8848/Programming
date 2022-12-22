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
    s = sort(n , a);
    printf("The largest element is : %d\n\n",*s);
    free(a);
    }
    else{
        printf("Not enough memory!");
    }
}

int *sort(int num , int *a){
    int j , *m;
    m = a;
    for (j = 1 ; j <num ; j++ ){
        if (*m < *(a+j)){
            m = (a+j);
        }
    }
    return m;
}
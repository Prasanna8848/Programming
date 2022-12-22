#include<stdio.h>

void maxnmin(int *,int);
void sumnaverage(int *,int);


void main(void){
    int n,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxnmin(arr,n);
    sumnaverage(arr,n);
}

void maxnmin(int *a,int n){
    int i ,min= *a ,max= *a;
    for (i=1;i<n;i++){
        if(min>*(a+i)){
            min =*(a+i);
        }
        else if(max<*(a+i)){
            max = *(a+i);
        }
    }
    printf("\nThe largest element is %d.\n",max);
    printf("\nThe smallest element is %d.\n",min);
}

void sumnaverage(int *a ,int n){
    int s=0  ,i;
    float avg;
    for (i=0 ; i<n ; i++){
        s += *(a+i);
    }
    avg = (float)s / n;
    printf("The sum of all the elements in the array is : %d",s);
    printf("\nThe avearge of all the elements in the array is : %.2f",avg);
}
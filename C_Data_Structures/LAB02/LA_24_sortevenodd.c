#include<stdio.h>
#include<stdlib.h>

void swap(int *, int , int);

int main(){
    int *aptr ,n ,i ,j ,pt =0 ,temp;
    printf("\n\nEnter the number of elements to be stored in array: ");
    scanf("%d",&n);
    aptr = (int*) malloc(n* sizeof(int));
    printf("\nEnter the elements of the array :");
    for (i =0 ; i<n ;i++){
        scanf("%d",(aptr+i));
    }
    for (i =0 ; i<n ;i++){
        if( (*(aptr+i) % 2) ==0){
            swap( aptr ,pt , i);
            pt++;
        }
    }
    printf("\nElements after arrangement : ");
    for (i =0 ; i<n ;i++){
        printf("%d ",*(aptr+i));
    }
    
}

void swap(int*aptr , int p , int i){
    int j , temp;
    temp = *(aptr + i);
    for(j=i ; j>p ;j--){
        *(aptr+j) = *(aptr+j-1);
    }
    *(aptr+p)=temp;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *aptr ,n ,i ,j ,bol ,temp;
    printf("\n\nEnter the number of elements to be stored in array: ");
    scanf("%d",&n);
    aptr = (int*) malloc(n* sizeof(int));
    printf("\nEnter the elements of the array :");
    for (i =0 ; i<n ;i++){
        scanf("%d",(aptr+i));
    }
    for(i =0 ; i<(n-1) ;i++){
        bol =0;
        for(j =0 ; j<(n-1) ; j++){
            if(*(aptr+j)>*(aptr+j+1)){
                bol++;
                temp =*(aptr+j);
                *(aptr+j) = *(aptr+j+1);
                *(aptr+j+1) = temp;
            }
        }
        if (bol ==0){
            break;
        }
    }
    printf("\nThe second largest number is %d",*(aptr+n-2));
    printf("\nThe second smallest number is %d",*(aptr+1));
}
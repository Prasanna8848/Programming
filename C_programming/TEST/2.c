#include<stdio.h>

int main(){
    int i , j , l=0 ,x , n ;
    printf("Enter no. of rows to be printed");
    scanf("%d",&n);
    x=n;
    for (i = 1; i<=n ;i++){
        if (i%2==1){
            for (j =1 ; j<= x ; j++){
                l+=1 ;
                printf("%d ",l);
            }
            
        }    
        else{
            l +=x;
            for (j =1 ; j<= x ; j++){
                printf("%d ",l);
                l-=1 ;
            }
            l +=x;
        }
        x-=1;
        printf("\n");
    }
}
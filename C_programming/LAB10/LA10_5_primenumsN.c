#include <stdio.h>

int isPRIME(int);

int main(){
    int num , i  ,j , B ;
    printf("\n\nEnter a integer upto which program checks the prime : ");
    scanf("%d",&num);
    if (num>=2){
        for (i = 2 ; i<=num ; i++ ){
            B = isPRIME(i);
            if (B == 1){
                printf("%d ",i);
            }
        }
        printf("\n\n");
    }
    else {
        printf("invalid input!! your input was %d, Try other values",num);
    }
} 

int isPRIME(int a){
    int flag = 1 , j ;
    for (j=2 ; j < a; j++){
        if (a % j ==0){
            flag = 0;
            break;
        } 
    }
    return flag;
}
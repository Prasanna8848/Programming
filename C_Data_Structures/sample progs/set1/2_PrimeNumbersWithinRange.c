#include<stdio.h>
#include<math.h>

int prime(int);

void main(void){
    int low , up, i ,bol;
    printf("\n\nEnter the range in which prime number is to be found (lower limit upper limit) : " );
    scanf("%d %d",&low,&up);
    printf("The prime numbers between %d and %d is/are : ",low ,up);
    for(i =low; i<=up ;i++ ){
        bol=prime(i);
        if(bol == 1){
            printf(" %d",i);
        }
    }
}

int prime(int n){
    if (n==0||n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    int j;
    for (j = 2 ; j <= pow(n,0.5) ; j++){
        if(n%j==0){
            return 0;
            break;
        }
    }
    return 1;
}
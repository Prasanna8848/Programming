#include<stdio.h>

void fibonacci(int);
void main(){
    int n ;
    printf("\nEnter any number to which fibonacci series is to be found :");
    scanf("%d",&n);
    fibonacci(n);
}

void fibonacci(int n){
    int a , b ,c, i;
    a=0;
    b=1;
    for (i=1 ; i<=n ;i++){
        printf(" %d",b);
        c = a;
        a = b;
        b = c + b;
    }
}
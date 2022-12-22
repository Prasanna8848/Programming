#include<stdio.h>

int GCD(int,int);

int main(){
    int num1 , num2, LCM ;
    printf("\n\nEnter any two numbers:");
    scanf("%d %d",&num1 , &num2);
    LCM = (num1 * num2)/(GCD(num1,num2));
    printf("The LCM of numbers %d and %d is = %d\n\n",num1,num2,LCM);
    return 0;
}

int GCD(int a ,int b){
    int i, g , c;
    c=b;
    if (a<b){
    c = a;
    }
    for (i =1 ; i<=c ; i++){
        if ((a % i == 0) && (b % i == 0))
        g=i;
    }
    return g;
}
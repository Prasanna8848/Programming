#include<stdio.h>

int armstrong(int);
int power(int , int);
int digitno(int);

void main(){
    int num ,armstrongnum;
    printf("\nEnter the number to check whether the given number is armstrong number or not :");
    scanf("%d",&num);
    armstrongnum = armstrong(num);
    if (armstrongnum == num){
        printf("\nThe given number is a armstrong number .");
    }
    else{
        printf("\nThe given number is not a armstrong number .");
    }

}

int armstrong(int n){
    int numofdigits , finalnum =0;
    numofdigits = digitno(n);
    while (n != 0){
        finalnum += power(n % 10 ,numofdigits );
        n /= 10;
    }
    return finalnum;
}

int digitno(int n){
    int number=0;
    while(n != 0){
        number++;
        n /= 10;
    }
    return number;
}

int power(int b , int p){
    int i, num=1;
    for( i = 0; i < p; i++){
        num *=b; 
    }
    return num;
}

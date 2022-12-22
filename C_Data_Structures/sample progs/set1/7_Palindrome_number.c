#include<stdio.h>

int palindrome(int);

void main(void){
    int num ,bool;
    printf("\nEnter the number to find whether it is palindrome or not :");
    scanf("%d",&num);
    bool=palindrome(num);
    if(bool ==1){
        printf("The given number %d is a palindrome ",num);
    }
    else{
        printf("The given number %d is not a palindrome ",num);
    }
}

int palindrome(int num){
    int n = num, out =0;
    while(n!=0){
        out =(out*10) + (n % 10);
        n /=10; 
    }
    if(out == num){
        return 1;
    }
    else{
        return 0;
    }
}
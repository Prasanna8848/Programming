#include<stdio.h>

int reverse(int);
void main(){
    int num ,reversenum;
    printf("\nEnter the number to check whether the given number is palindrome or not :");
    scanf("%d",&num);
    reversenum = reverse(num);
    if (reversenum == num){
        printf("\nThe given number is a palindrome number .");
    }
    else{
        printf("\nThe given number is not a palindrome number .");
    }

}

int reverse(int n){
    int  r=0;
    while (n != 0){
        r = (r * 10) + (n%10);
        n /= 10;
    }
    return r;
}
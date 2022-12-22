#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void main(void){
    char alpha,alpha1;
    printf("\nEnter the character :");
    scanf("%c",&alpha);
    if ((alpha<65 || alpha>90) &&(alpha < 97 || alpha > 122)){
        printf("Invalid character!!!");
        exit(1);
    }
    alpha1 = toupper(alpha);
    switch (alpha1){
    case 'A':
        printf("\n%c is vowel.",alpha);
        break;
    case 'E':
        printf("\n%c is vowel.",alpha);
        break;
    case 'I':
        printf("\n%c is vowel.",alpha);
        break;
    case 'O':
        printf("\n%c is vowel.",alpha);
        break;
    case 'U':
        printf("\n%c is vowel.",alpha);
        break;
    default:
        printf("\n%c is consonant.",alpha);
        break;
    }
}
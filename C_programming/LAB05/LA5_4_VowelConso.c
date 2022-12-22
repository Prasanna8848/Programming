#include<stdio.h>

int main(){
    char ch3439;
    printf("\n\nEnter any character:");
    scanf("%c",&ch3439);
    if ((ch3439>='A' && ch3439<='Z') || (ch3439 >= 'a' &&ch3439 <='z' )){
        switch(ch3439){
            case 'A' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'E' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'I' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'O' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'U' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'a' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'e' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'i' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'o' : printf("%c is a vowel.\n\n",ch3439);
                break;
            case 'u' : printf("%c is a vowel.\n\n",ch3439);
                break;
            default : printf("%c is a consonant.\n\n",ch3439);
            }
    }
    else{
        printf("It is not a letter.\n\n");
    }
    return 0;
}
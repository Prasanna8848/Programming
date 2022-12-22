#include <stdio.h>

int main() {
    char ch3439;
    printf("\n\nEnter any one character : ");
    scanf("%c", &ch3439);
    if ((ch3439>=65 && ch3439<=90) || (ch3439 >= 97 &&ch3439 <=122 )){
        if(ch3439=='A'|| ch3439=='E'|| ch3439=='I' || ch3439=='O'|| ch3439=='U' || ch3439=='a'|| ch3439=='e'|| ch3439=='i' || ch3439=='o'|| ch3439=='u'){
            printf("The character %c is a Vowel !",ch3439);
        }
        else{
            printf("The character %c is a consonant !",ch3439);
        }
    }
    else{
        printf("It is not a character");
    }
return 0;
}

#include <stdio.h>

int main() {
    char ch3439;
    printf("\n\nEnter any one character : ");
    scanf("%c", &ch3439);
    if ((ch3439>='A' && ch3439<='Z') || (ch3439 >= 'a' &&ch3439 <='z' )){
        printf("The character %c is a letter.",ch3439);
    }
    else if (ch3439>='0' && ch3439<='9'){
        printf("The character %c is a number.",ch3439);
    }
    else{
        printf("The character %c is a special character.",ch3439);
    }
return 0;
}

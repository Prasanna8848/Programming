#include <stdio.h>

int main() {
    char a3439, ao3439;
    printf("\n\nEnter a character : ");
    scanf("%c",&ao3439);
    
    if(ao3439 >= 'A' && ao3439 <= 'Z'){
        a3439 = ao3439 +32;
        printf("The entered character %c in lowercase is : %c.\n\n",ao3439 , a3439);
    }
    else{
        printf("The entered character is already in lowercase.\n\n");
    }
    return 0;
}

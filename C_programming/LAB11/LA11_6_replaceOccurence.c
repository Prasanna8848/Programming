#include<stdio.h>
#include<string.h>

int main(){
    char string[100], find , replace;
        int i  , j, c = 0 ,  v = 0;
    printf("\n\nEnter the sentence in which character is replaced : ");
    gets(string);
    printf("Enter the characters to be replaced and to be replaced by in the sentence : ");
    scanf("%c %c",&find,&replace);
    j = strlen(string);
    for (i = 0 ; i < j ; i++ ){
        if (string[i] == find){
            string[i] = replace;
        }
    }
    printf("The final sentence is : \n%s",string);
    return 0;
}
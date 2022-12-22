#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char string[100];
        int i  , j;
    printf("\n\nEnter the sentence to get the first letter of each words capitalized : ");
    gets(string);
    string[0] = toupper(string[0]);
    j = strlen(string);
    for (i = 0 ; i < j ; i++ ){
        if (string[i] == ' ' ){
        string[i+1] = toupper(string[i+1]);
        }
    } 
    printf("The sentence after first character of each word is capitalized = \n%s\n\n",string);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    char string[100], newstring[100];
        int i  , j, k = 1;
    printf("\n\nEnter the sentence to get the first letter of each words : ");
    gets(string);
    j = strlen(string);
    newstring[0]=string[0];
    for (i = 1 ; i < j ; i++ ){
        if (string[i] == ' ' ){
            newstring [k] = string[i+1];
            k++;
        }
    } 
    newstring[k]='\0';
    printf("The first letter of each words = %s\n\n",newstring);
    return 0;
}
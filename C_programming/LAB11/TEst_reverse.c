#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char string[100], restring[100];
    int i  , j, k=0, l;
    char temp;
    printf("\n\nEnter the sentence to get the first letter of each words : ");
    gets(string);
    j = strlen(string);
    for (i = 0 ; i < j ;i++ ){
        k=0;
        while ((string[i]!=' ') && (string[i]!='\0') ){
        restring[k] = string[i];
        i++;
        k++; 
        }
        restring[k]='\0';
        k--;
        for (l=0 ; l<=(k/2) ; l++){
        temp = restring[k];
        restring[k] = restring[l];
        restring[l] = temp;
        k--; 
        }
        
    }


   // printf("The sentence after first character of each word is capitalized = \n%s\n\n",string);
}


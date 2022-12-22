#include<stdio.h>
#include<string.h>

int main(){
    char string[100] ;
        int i  , j, c = 0 ,  v = 0;
    printf("\n\nEnter the sentence to get the number of vowels and consonants : ");
    gets(string);
    j = strlen(string);
    for (i = 0 ; i < j ; i++ ){
        if ((string[i] == 'A' )||(string[i] == 'E' )||(string[i] == 'I' )||(string[i] == 'O' )||(string[i] == 'U' )||
        (string[i] == 'a' )||(string[i] == 'e' )||(string[i] == 'i' )||(string[i] == 'o' )||(string[i] == 'u' )){
            v++;
        }
        else if (((string[i]>=65) && (string[i]<=90))||((string[i]>=97) && (string[i]<=122))){
            c++;
        }
    }
    printf("The no. of vowels = %d and the number of consonants = %d\n\n",v,c);
    return 0;
}
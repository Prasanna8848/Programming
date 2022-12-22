#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char string[100];
    int i , length, j, k=0, l , m;
    char temp;
    printf("\n\nEnter the sentence to reverse the every word : ");
    gets(string);
    printf("You have entered :%s\n",string);
    length = strlen(string);
    for (i = 0 ; i < length ;i++ ){
        j=i;
        k=0;
        while ((string[i]!=' ') && (string[i]!='\0') ){
        i++;
        k++; 
        }
        m=(j+k-1);
        for (l=0 ; l<(k/2) ; l++){
        temp = string[m];
        string[m] = string[j];
        string[j] = temp;
        m--;
        j++; 
        }   
    }
    printf("The sentence after every word is reversed = \n%s\n\n",string);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
    char string[100],temp ;
    int i = 0 , j;
    printf("\n\nEnter the string to get the reverse : ");
    scanf("%s",string);
    j = ((strlen(string))-1);
    for (i=0 ; i<(j/2) ; i++){
        temp = string[j];
        string[j]=string[i];
        string[i]=temp;
        j--;
    }
    printf("The reversed string is = %s\n\n",string);
    return 0;
}

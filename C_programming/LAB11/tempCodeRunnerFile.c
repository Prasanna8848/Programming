#include<stdio.h>
#include<string.h>

int main(){
    int i=0 , j , num;
    printf("\n\nEnter no. of words to be sorted : ");
    scanf("%d",&num);
    char string[10][100] , temp[100];
    while (i <num){
        scanf("%s",string[i++]);
    }
    for (i=0 ; i<num ; i++){
        for (j = 0; j<(num-1) ;j++){
            if (strcmp(string[j],string[j+1])>0){
                strcpy(temp, string[j+1]);
                strcpy(string[j+1],string[j]);
                strcpy(string[j],temp);
            }
        }
    }
    i=0;
    printf("\nThe sorted strings are :\n");
    while (i<num){
        printf("%s ",string[i++]);
    }
}
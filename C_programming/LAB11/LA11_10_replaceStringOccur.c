#include<stdio.h>
#include<string.h>

int main(){
    char string[100], find[100] , replace[100] , temp[100];
        int i  , j, c = 0 ,  v = 0, k ,m;
    printf("\n\nEnter the sentence in which character is replaced : ");
    gets(string);
    printf("Enter the characters to be replaced and to be replaced by in the sentence : ");
    scanf("%s %s",find,replace);
    j = strlen(string);
    c = strlen(find);
    for (i = 0 ; i < j ; i++ ){
        v=0;
        if ((string[i] == find[v])&& ( (c+i)<(j+1))){
            for (k=0;k < c ; k++){
                temp[k]= string[i+k];
            }
            m =strcmp(temp , find);
            if (m==0){
                for (k=0;k < c ; k++){
                string[i+k] = replace[k];
                }
            }
        }
    }
    printf("The final sentence is : \n%s",string);
    return 0;
}
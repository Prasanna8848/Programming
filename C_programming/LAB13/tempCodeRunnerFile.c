#include<stdio.h>
#include<string.h>

int count (char * ,char * );
int main(){
    int co;
    char string[100], find[100] ;
    printf("\n\nEnter the sentence in which character is replaced : ");
    gets(string);
    printf("Enter the string to be counted in the sentence : ");
    scanf("%s",find);
    co = count(string , find);
    printf("The no. of %s words is : \n%d",find,co);
    return 0;
}

int count(char *sarr ,  char *farr ){
    char temp[100];
        int i  , j, c ,d=0 , k ,m;
    j = strlen(sarr);
    c = strlen(farr);
    for (i = 0 ; i < j ; i++ ){
        
        if ((*(sarr+i) == *(farr))&& ( ((c+i)<(j+1))||(*(sarr+i+c)==' '))){
            for (k=0;k < c ; k++){
                *(temp+k)= *(sarr+i+k);
            }
            *(temp+c)='\0';
            m =strcmp(temp , farr);
            if (m==0){
                d++;
                }
            }
            while(*(sarr+i)!=' '){
                i++;
            }
        }
        return d;
    }
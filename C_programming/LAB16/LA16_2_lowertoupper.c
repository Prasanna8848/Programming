#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define file1 lower.txt;
#define file2 upper.txt;

int main(){
    FILE *fp1 , *fp2;
    char a;
    if (fp1 == NULL){
        printf("Error occurred when opening the file!");
        exit(0);
    }
    else{
        fp1 = fopen("lower.txt","r");
            printf("\n\nThe content of file  before  copying and changing to upper case:\n");
            while ((a= fgetc(fp1))!= EOF){
                fprintf(stdout , "%c" , a);
            }
            printf("\n\n");
            fclose(fp1);
    }
        fp1 = fopen("lower.txt" ,"r");
        fp2 = fopen("upper.txt" , "w");
        if ((fp1 == NULL)&&(fp2 == NULL)) {
        printf("Error occurred when opening the file!");
        exit(0);
    }
    else{
        while ((a = fgetc(fp1)) !=EOF){
            putc((toupper(a)),fp2);
        }
        fclose(fp1);
        fclose(fp2);
        }
        fp2 = fopen("upper.txt","r");
    if (fp1 == NULL){
        printf("Error occurred when opening the file!");
        exit(0);
    }
    else{
        printf("\n\nThe content of file  after copying is :\n");
        while ((a= fgetc(fp1))!= EOF){
            fprintf(stdout , "%c" , a);
        }
        printf("\n\n");
        fclose(fp2);
    }
}
#include<stdio.h>
#include<stdlib.h>
#define file1 data.txt;
#define file2 copy.txt;
int main(){
    FILE *fp1 , *fp2;
    char a;
    fp1 = fopen("data.txt" ,"r");
    fp2 = fopen("copy.txt" , "w");
    if (fp1 == NULL){
        printf("Error occurred when opening the file!");
        exit(0);
    }
    else{
        while ((a = fgetc(fp1)) !=EOF){
            putc(a,fp2);
        }
        fclose(fp1);
        fclose(fp2);
        fp2 = fopen("copy.txt","r");
        printf("\n\nThe content of file  after copying is :\n");
        while ((a= fgetc(fp1))!= EOF){
            fprintf(stdout , "%c" , a);
        }
        printf("\n\n");
        fclose(fp2);
    }

}
#include<stdio.h>

int main(){
    FILE *fp;
    int roll , stun,i;
    float marks;
    char name[100] , gender[10];
    printf("Enter the no.of students :");
    scanf("%d",&stun);
    fp = fopen("students.txt","w");
    if (fp == NULL){
        printf("Error Occurred");
    }
    else{
        printf("Name\tRoll no\tGender\tmarks\n");
        for (i =1  ; i<=stun ; i++){
            fscanf(stdin,"%s  %d %s %f", name ,&roll , gender ,&marks);
            fprintf(fp ,"%s  %d  %s %f", name ,roll , gender ,marks);
        }
        fclose(fp);
        printf("\n\n\n");
        fp = fopen("students.txt","r");
        printf("Name\t\tRoll no\t\tGender\t\tmarks\n");
        for (i = 1 ; i<=stun ; i++){
            fscanf(fp,"%s  %d %s %f", name ,&roll , gender ,&marks);
            fprintf(stdout ,"%s \t\t %d \t\t %s\t\t%f\n", name ,roll , gender ,marks);
        }
        fclose(fp);
    }
    
}
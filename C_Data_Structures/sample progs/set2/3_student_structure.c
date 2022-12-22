#include<stdio.h>

struct student{
    char name[25];
    int rollno;
    int marks;
    char address[25];
};

void main(void){
    struct student s[5];
    int i;
    printf("\nEnter the details of 5 students:");
    for(i =0; i<5 ;i++){
        printf("\nstudent %d :\n",i+1);
        printf("Enter name : ");
        scanf("%s",s[i].name);
        printf("Enter roll no : ");
        scanf("%d",&s[i].rollno);
        printf("Enter marks in C-programming : ");
        scanf("%d",&s[i].marks);
        printf("Enter Address : ");
        scanf("%s",s[i].address);
    }
    printf("\n\nThe details of 5 students:");
    for(i =0; i<5 ;i++){
        printf("\n\nstudent : %d",i+1);
        printf("\nName : %s",s[i].name);
        printf("\nRoll no : %d",s[i].rollno);
        printf("\nMarks in C-programming : %d",s[i].marks);
        printf("\nAddress : %s",s[i].address);
    }

}
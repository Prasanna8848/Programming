#include<stdio.h>

struct student {
    char name[25];
    int rollno;
    float marks[5];
} s1;

int main(){
    int i;
    printf("\nEnter the details of the student:");
    printf("\nEnter the Name of the student :");
    gets(s1.name);
    gets(s1.name);
    printf("\nEnter the Roll No. of the student :");
    scanf("%d",&s1.rollno);
    printf("\nEnter the marks of the student in 5 subjects :");
    for (i=0;i<=4;i++){
        printf("\nEnter the marks of subject %d :",(i+1));
        scanf("%f",&s1.marks[i]);
    }
    printf("\nDetails of the student:");
    printf("\nName of the student is : %s",s1.name);
    printf("\nRoll No. of the student  is : %d",s1.rollno);
    printf("\n the marks of the student in 5 subjects :");
    for (i=0;i<=4;i++){
        printf("\n The marks in subject %d is : %0.1f",(i+1),s1.marks[i]);
    }
}
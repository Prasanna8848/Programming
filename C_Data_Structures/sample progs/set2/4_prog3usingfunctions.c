#include<stdio.h>

struct student{
    char name[25];
    int rollno;
    int marks;
    char address[25];
};

void func1(struct student *, int);
void display(struct student *, int);

void main(void){
    int i , n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    struct student s[n];
    printf("\nEnter the details of %d students:",n);
    for(i=0;i<n;i++){
        func1((s+i),i);
    }
    printf("\n\nThe details of the students:");
    for(i=0;i<n;i++){
        display((s+i),i);
    }
}

void func1(struct student *s, int i){
    printf("\nstudent %d :\n",i+1);
    printf("Enter name : ");
    scanf("%s",s->name);
    printf("Enter roll no : ");
    scanf("%d",&s->rollno);
    printf("Enter marks in C-programming : ");
    scanf("%d",&s->marks);
    printf("Enter Address : ");
    scanf("%s",s->address);
}

void display(struct student *s, int i){
    printf("\n\nstudent : %d",i+1);
    printf("\nName : %s",s->name);
    printf("\nRoll no : %d",s->rollno);
    printf("\nMarks in C-programming : %d",s->marks);
    printf("\nAddress : %s",s->address);
}
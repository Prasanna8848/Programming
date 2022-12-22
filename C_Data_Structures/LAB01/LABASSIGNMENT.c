#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[25];
    int rollno;
    int submarks[3];
    int average;
};

void main(){
    int i ,j;
    struct student *s;
    s =(struct student *) malloc(5*sizeof(struct student));
    // to enter the details of the student.
    printf("\n\nEnter the details of students : ");
    for(i =0; i<=4 ;i++){
        printf("\n Enter details for student %d :",i+1);
        printf("\nName : ");
        scanf("%s",(s+i)->name);
        printf("Enter the roll no : ");
        scanf("%d", &(s+i)->rollno);
        printf("Enter marks in 3 subjects : ");
        for(j=0;j<3;j++){
            scanf("%d",&(s+i)->submarks[j]);
        }
    }
    //To dispaly the details of the students.
    printf("\n\nThe details entered in the program :\n");
    for(i =0; i<=4 ;i++){
        printf("\n\nDetails for student %d :\n",i+1);
        printf("\nName: %s ",(s+i)->name);
        printf("\nRoll no : %d", (s+i)->rollno);
        printf("\nMarks in 3 subjects  : ");
        for(j=0;j<3;j++){
            printf("%d ",((s+i)->submarks[j]));
        }
    }
}
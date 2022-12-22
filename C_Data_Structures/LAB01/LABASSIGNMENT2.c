#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[25];
    int rollno;
    int submarks[3];
    int average;
};

void more(struct student * ,int);
int average (struct student *, int);
int highest(struct student * ,int);
float averagesubmarks(struct student *, int);

void main(){
    int i ,j, add;
    float avg;
    struct student *s;
    s =(struct student *) malloc(5*sizeof(struct student));
    // to enter the details of the student.
    printf("\n\nEnter the details of students : ");
    for(i =0; i<=4 ;i++){
        printf("\nEnter Details for student %d :",i+1);
        printf("\nName :");
        scanf("%s",&(s+i)->name);
        printf("Enter the roll no : ");
        scanf("%d", &(s+i)->rollno);
        printf("Enter marks in 3 subjects :");
        for (j =0 ; j<3 ; j++){
            scanf("%d",&(s+i)->submarks[j]);
        }
    }
    //To dispaly the details of the students.
    for(i =0; i<=4 ;i++){
        printf("\n\nDetails for student %d :",i+1);
        printf("\nName: %s ",(s+i)->name);
        printf("\nRoll no : %d", (s+i)->rollno);
        printf("\nMarks in 3 subjects :");
        for (j =0 ; j<3 ; j++){
            printf("%d ",(s+i)->submarks[j]);
        }
        printf("\nThe average marks :%d",average(s,i));
    }
    for(i =0; i<3;i++){
        printf("\n\nStudents who got more than 50 in subject %d:",i+1);
        more(s , i);
    }
    for(i =0; i<3;i++){
        avg = averagesubmarks(s , i);
        printf("\n\nAverage marks obtained by students in subject %d : %.2f",i+1,avg);
    }
    for(i =0; i<3;i++){
    add = highest(s ,i);
    printf("\n\n Highest marks in subject %d obtained by : %s ",i+1, (s+add)->name);
    }
}

int average(struct student *s, int n){
    int j, a=0;
    for (j = 0; j <= 2 ;j++){
        a += *((s+n)->submarks+j);
    }
    a /=3;
    return a;
}

void more(struct student *s, int sub){
    int i , bol=0;
    for(i =0; i<=4 ;i++){
        if(*((s+i)->submarks+sub) > 50){
            printf("\n%s",(s+i)->name);
            bol++;
        }
    }
    if (bol == 0){
            printf("none!!");
        }
}

int highest(struct student *s ,int sub){
    int i, h =0;
    for(i =0; i<=4 ;i++){
        if(*((s+i)->submarks+sub) > *((s+h)->submarks+sub)){
            h=i;
        }
    }
    return h;
}

float averagesubmarks(struct student *s, int sub){
    int i ;
    float total =0;
    for(i =0; i<=4 ;i++){
        total +=*((s+i)->submarks+sub);
    }
    return (total/5);
}
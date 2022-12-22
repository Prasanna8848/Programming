#include<stdio.h>

struct student{
  int roll;
  char name[50];
  char gender[10];
  float marks[5];
  float total;
};

int main(){
    int i, j ,num , flag;
    printf("Enter the number of students details to be stored :");\
    scanf("%d",&num);
    struct student stu[num];
 
    for (i=0 ; i<num;i++){
        printf("Enter the details for student %d :\n",(i+1));
        printf("Name : ");
        gets(stu[i].name);
        gets(stu[i].name);
        printf("Roll number : ");
        scanf("%d",&(stu[i].roll));
        printf("Gender (male/female) : ");
        gets(stu[i].gender);
        gets(stu[i].gender);
        printf("Enter the marks of the student in 5 subject:( 0<= marks <=100) \n");
        for (j=0 ; j<5 ; j++){
            printf("Enter marks in subject %d = ",j+1);
            scanf("%f",&(stu[i].marks[j]));
            if (((stu[i].marks[j])<0) || ((stu[i].marks[j])>100)){
                printf("Invalid marks for subject %d , reenter the marks :\n",j+1);
                j--;
            }
        }
        stu[i].total =0;
    }
    printf("\n\n<----------------Details of the students ------------>\n\n");
    for (i=0 ; i<num;i++){
        printf("\n\nDetails of Students No:-%d\n",i+1);
        printf("Name : %s \n",stu[i].name);
        printf("Roll number : %d\n",stu[i].roll);
        printf("Gender (male/female) :%s\n ",(stu[i].gender));
        printf("Marks obtained by the student\n");
        for (j=0 ; j<5 ; j++){
        printf("Marks in subject %d = %0.1f\n",j+1,(stu[i].marks[j]));
        stu[i].total +=(stu[i].marks[j]);
        }
        printf("Total marks obtained by the student is %.1f",stu[i].total);
        printf("\n\n");
    }


    for  (i=0 ; i<5;i++){
        flag=0;
        printf("\nDetails Students failed in subject %d:\n\n",i+1); 
        for (j=0 ; j<num ; j++){
            if ((stu[j].marks[i]) <40){
                printf("\n\nstudent no :- %d\n", j);
                printf("Name : %s \n",stu[j].name);
                printf("Roll number : %d\n",stu[j].roll);
                printf("Marks in subject %d = %0.1f\n",i+1,(stu[j].marks[i]));
                flag=1;
            }
        }
        if (flag ==0){
            printf("None failed in this subject\n");
        }   
        }
    }
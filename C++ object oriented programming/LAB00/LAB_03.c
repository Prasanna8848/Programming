#include<stdio.h>
#include<stdlib.h>

struct employee{
    int employeeid;
    char name[25];
    int age;
    float basicsalary;
    float grosssalary;
};

void main(){
    struct employee *eptr;
    int n , i;
    printf("\nEnter the number of employee :");
    scanf("%d",&n);
    eptr = (struct employee *) calloc(n, sizeof(struct employee));
    printf(("\n\nEnter the details of all the employess as asked:"));
    for (i = 0 ; i<n ;i++){
        printf("\n\nEnter the details for employee %d",(i+1));
        printf("\nEnter the employee id : ");
        scanf("%d",&eptr[i].employeeid);
        printf("\nEnter the name of the employee : ");
        gets(eptr[i].name);
        gets(eptr[i].name);
        printf("\nEnter the age of the employee : ");
        scanf("%d",&eptr[i].age);
        printf("\nEnter the basic salary of the employee : ");
        scanf("%f",&eptr[i].basicsalary);
        eptr[i].grosssalary = eptr[i].basicsalary + 
        (eptr[i].basicsalary * 0.80) + (eptr[i].basicsalary * 0.10);
    }
    printf("\n\n\tEmployee Id\tName\t\tAge\tBasic Salary\tGross Salary");
    for (i = 0 ; i<n ;i++){
        printf("\n\n\t%8d\t%-15.12s\t%2d\t%12.2f\t%12.2f" , eptr[i].employeeid,
        eptr[i].name,eptr[i].age , eptr[i].basicsalary , eptr[i].grosssalary);
    }
}
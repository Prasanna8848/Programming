#include<stdio.h>

struct employee{
    char name[25];
    char gender;
    char designation[25];
    char department[25];
    float basicpay;
    float grosspay;
};

void main(void){
    int n, i;
    float hr , da;
    printf("Enter the number of employee :");
    scanf("%d",&n);
    struct employee e[n];
    for( i = 0;i < n; i++){
        printf("\nEnter the details of employee %d ",i+1);
        printf("\n\nEnter name :");
        gets(e[i].name);
        gets(e[i].name);
        printf("Enter gender :");
        scanf("%c",&e[i].gender);
        printf("Enter designation :");
        gets(e[i].designation);
        gets(e[i].designation);
        printf("Enter department :");
        gets(e[i].department);
        printf("Enter basic pay :");
        scanf("%f",&e[i].basicpay);
        hr = 0.25 * e[i].basicpay;
        da = 0.75 * e[i].basicpay;
        e[i].grosspay = e[i].basicpay + hr + da;
    }
    printf("Details of the employees : \n");
    printf("Name\tGender\tDesignation\tDepartment\tBasic Pay\tGross Pay\n");
    for( i = 0;i < n; i++){
        printf("%s\t",e[i].name);
        printf("%c\t",e[i].gender);
        printf("%s\t\t",e[i].designation);
        printf("%s\t\t",e[i].department);
        printf("%.1f\t\t",e[i].basicpay);
        printf("%.1f\n",e[i].grosspay);
    }
}

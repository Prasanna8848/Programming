#include<stdio.h>
#include<stdlib.h>

float grosscalc(float);

struct employee{
    char name[25];
    char gender[10];
    char designation[20];
    char department[20];
    float basicpay;
    float grosspay;
};

int main(){
    struct employee *eptr;
    int n , i;
    printf("\nEnter the number of employees :");
    scanf("%d",&n);
    eptr = (struct employee *) malloc(n*sizeof(struct employee));
    for (i=0 ; i<n ; i++){
        printf("\n\nEnter details for employee %d",(i+1));
        printf("\nEnter name :");
        gets((eptr+i)->name);
        gets((eptr+i)->name);
        printf("Enter gender :");
        gets((eptr+i)->gender);
        printf("Enter designation :");
        gets((eptr+i)->designation);
        printf("Enter department :");
        gets((eptr+i)->department);
        printf("Enter basic pay :");
        scanf("%f",&(eptr+i)->basicpay);
        (eptr+i)->grosspay = grosscalc((eptr+i)->basicpay);
    }
    for (i=0 ; i<n ; i++){
        printf("\n\nDetails for employee %d",(i+1));
        printf("\nName : %s",(eptr+i)->name);
        printf("\nGender : %s",(eptr+i)->gender);
        printf("\nDesignation : %s",(eptr+i)->designation);
        printf("\nDepartment : %s",(eptr+i)->department);
        printf("\nBasic pay : %.1f",(eptr+i)->basicpay);
        printf("\nGross pay : %.1f",(eptr+i)->grosspay);
    }
    return 0;
}

float grosscalc(float pay){
    float hr, da , gross;
    hr = 0.25 * pay;
    da = 0.75 * pay;
    gross = pay + hr + da;
    return gross;
}
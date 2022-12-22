#include<stdio.h>
#include<stdlib.h>

struct employee{
  char name[100];
  char gender[10];
  char department[100];
  char designation[100];
  float basicpay , da , hra , grosspay;
};
int main(){
  int n, i;
  struct employee *ptr;
  printf("Enter no. of employees :");
  scanf("%d",&n);
  ptr = (struct employee *)calloc(n, sizeof (struct employee));
  if (ptr == NULL){
    printf("Memory allocation failed !!");
  }
  else{ 
    printf("Enter the employee details\n");
    for (i=0; i < n ; i++){
      printf("\nEnter the details for employee no :%d\n",i+1);
      printf("Name : ");
      gets((ptr+i)->name);
      gets((ptr+i)->name);
      printf("Gender (Male/Female) : ");
      gets((ptr+i)->gender);
      printf("Department :");
      gets((ptr+i)->department);
      printf("Designation :");
      gets((ptr+i)->designation);
      printf("Basic pay:");
      scanf("%f",&((ptr+i)->basicpay));
      ((ptr+i)->da)=0.75*((ptr+i)->basicpay);
      ((ptr+i)->hra) = 0.25*((ptr+i)->basicpay);
      ((ptr+i)->grosspay) =((ptr+i)->basicpay)+((ptr+i)->da)+((ptr+i)->hra)+500;
    }
    for (i=0; i < n ; i++){
      printf("\nThe details for employee no :%d\n\n",i+1);
      printf("Name :%s\n",(ptr+i)->name);
      printf("Gender : %s\n",((ptr+i)->gender));
      printf("Department : %s\n",((ptr+i)->department));
      printf("Designation : %s\n",((ptr+i)->designation));
      printf("Basic pay= %.2f\n",((ptr+i)->basicpay));
      printf("HRA = %f \nDA = %.2f \nMA = %f\n",((ptr+i)->hra),((ptr+i)->da),500.00);
      printf("Gross Pay = %.2f\n",((ptr+i)->grosspay));
    }
  }
}
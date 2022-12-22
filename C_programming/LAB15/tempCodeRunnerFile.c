#include<stdio.h>
#include<stdlib.h>

typedef struct{
float height;
float weight;
}vital;

typedef struct{
char name[100];
int employee_id;
vital vital1;
float salary;
}Employee;

void sort (Employee * );

int main(){
  int i ,j;
  Employee *eptr ;
  eptr = (Employee *) calloc(5, sizeof(Employee)); 
  if (eptr == NULL){
    printf("Memory allocation failed!!!!!!!");
  }
  else{
    printf("Enter the employees details\n");
    for (i = 0; i<5 ; i++){
      printf("Enter the Details for Employee %d\n",i+1);
      printf("Name : ");
      gets ((eptr+i)->name);
      gets ((eptr+i)->name);
      printf("Enter Employee id :");
      scanf("%d",&(eptr+i)->employee_id);
      printf("Enter Employee height :");
      scanf("%f",&((eptr+i)->vital1.height));
      printf("Enter Employee weight :");
      scanf("%f",&((eptr+i)->vital1.weight));
      printf("Enter employee salary :");
      scanf("%f",&(eptr+i)->salary);
    }
    sort(eptr);
    printf("The details after sorting:\n");
      for (i = 0; i<5 ; i++){
      printf("Details for Employee %d\n",i+1);
      printf("Name : %s\n",((eptr+i)->name));
      printf("Employee id :%d\n",(eptr+i)->employee_id);
      printf("Employee height :%f\n",((eptr+i)->vital1.height));
      printf("Employee weight :%f\n",((eptr+i)->vital1.weight));
      printf("Employee salary :%f\n",((eptr+i)->salary));
    }
  }
}

void sort (Employee *eptr ){
  int i , flag =1;
  Employee temp;
  while (flag==1){
    flag =0;
    for (i =0 ; i<4 ; i++){
      if (((eptr+i)->salary)>((eptr+(i+1))->salary)){
        temp = *(eptr+i);
        *(eptr+i) =*(eptr+(i+1));
        *(eptr+(i+1)) =temp;
        flag =1;
      }
    }
  }
}
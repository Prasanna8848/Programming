#include <stdio.h>
struct employee
{
  int employee_id;
  char name[100];
  int age;
  float basic_salary;
};
int main ()
{
  int n;
  printf ("Enter the No of Employee : ");
  scanf ("%d", &n);
  struct employee s[n];
  int temp = 0;
  float HRA = 0, DA = 0, gross_salary = 0;
  for (int i = 0; i < n; i++)
    {
      printf ("Enter the details of employee %d\n", i + 1);
      printf("Employee_id:");
      scanf("%d",&s[i].employee_id);
      printf ("Name : ");
      scanf("%s",s[i].name);
     printf("Age:");
     scanf("%d",&s[i].age);
      printf ("Basic Salary : ");
      scanf ("%f", &s[i].basic_salary);
    }
  for (int i = 0; i < n; i++)
    {
      printf ("\nDetails of employee %d :\n", i + 1);
      printf("Employee id:%d",s[i].employee_id);
      printf ("Name: %s\n", s[i].name);
      printf("Age:%d",s[i].age);
      HRA = 0.10 * (s[i].basic_salary);
      DA = 0.80 * (s[i].basic_salary);
      gross_salary = s[i].basic_salary+ HRA + DA;
      printf ("Basic Salary : %f\n", s[i].basic_salary);
      printf ("Gross Salary : %f\n", gross_salary);
    }
  return 0;
}
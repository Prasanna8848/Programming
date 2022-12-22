#include<stdio.h>

int sum(int);

int main(){
  int num  ,s;
  printf("\n\nEnter the number = ");
  scanf("%d",&num);
  printf("The sum of the digits of the number is : %d\n\n",sum(num));
}

int sum(int a){
  int su = 0 ,r ;
  while (a != 0){
    r = a % 10;
    su += r;
    a = a / 10;
  }
  return su;
}
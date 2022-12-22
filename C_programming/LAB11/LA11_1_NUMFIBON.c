#include <stdio.h>

int fib(int);

int main(){
  int num,f=0 ,i=0 ;
  printf("\n\nEnter any number to check whether it is a fibonacci number or not :");
  scanf ("%d",&num);
  while (f < num){
    f =fib(i);
    i++;
    }
  if (f==num){
    printf("%d is a fibonacci Number\n\n",num);
  }
  else{
    printf("%d is not a fibonacci Number\n\n",num);
  }
  return 0;
}

int fib(int n){
  if (n==0){
    return 0;
  }
  if (n==1){
    return 1;
  }
  return (fib(n-1)+fib(n-2));
}
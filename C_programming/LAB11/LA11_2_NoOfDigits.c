#include <stdio.h>

int count(int);

int main(){
  int num , numb, c;
  printf("\n\nEnter any number to count the digits in it = ");
  scanf("%d",&num);
  numb = num;
  c = count(num);
  printf("No of digits in the given number %d is = %d\n\n",numb,c);
  return 0;
}

int count (int n){ 
  if (n == 0){
    return 0 ;
  }
  return count((n/10)) +1;
}
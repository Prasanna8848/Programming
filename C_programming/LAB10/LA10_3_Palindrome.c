#include<stdio.h>

void palindrome(int);

int main(){
  int num  ,s;
  printf("\n\nEnter any integer to check whether it is a palindrome or not = ");
  scanf("%d",&num);
  palindrome(num);
  return 0;
}

void palindrome(int a){
  int r , pl=0 , o;
  o = a;
  while (a != 0){
    r = a % 10;
    pl= (pl * 10) + r;
    a = a / 10;
  }
  if (pl == o){
    printf("It is a palindrome.\n\n");
  }
  else{
    printf("It is not a palindrome.\n\n ");
  }
  return ;
} 
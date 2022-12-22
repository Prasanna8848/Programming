#include<stdio.h>

int fact(int);

int main(){
  int num , n, r , r1 , nr , nr1 , ncr;
  printf("Enter the value of n and r =");
  scanf("%d %d",&num , &r );
  if (num>=r && num>=0 && r>=0){  
    n= fact(num);
    r1 = fact(r);
    nr = num-r;
    nr1 = fact(nr);
    ncr = n /(nr1 *r1);
    printf("%d C %d = %d",num, r, ncr );
    }
  else{
    printf("invalid Value");
  }
  }

int fact(int a){
  int f=1,i;
  if ( a == 0 || a == 1){
    return f;
  }
  else{
    for (i=2; i<=a ; i++ ){
      f *= i;
    }
  }
  return f;
}
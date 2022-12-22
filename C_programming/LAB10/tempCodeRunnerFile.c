#include<stdio.h>

int factorial(int);
double power(double, int);

int main(){
    int  n ,y , f  , i  ;
    signed int sign;
    double num , pw, sum = 0  ;
    printf("\n\nEnter the value of X in sin(X) in radians and upto which term to iterate the series of sinx :");
    scanf("%lf %d",&num ,&n);
    for (i =0 ; i<n ; i++){
        y= (2*i)+1;
        pw= power(num ,y );
        f = factorial(y);
        sign = power(-1,i);
        sum = sum + ((sign * pw)/f);
    }
    printf("\n\nThe value from the series is : %.3lf",sum);
}

double power(double a,int b){
  int i ;
  double p=1;
    for (i = 0 ; i < b ; i++){
        p =(float )p * a;
    }
  return p;
} 

int factorial(int a){
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
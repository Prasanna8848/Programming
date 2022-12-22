#include<stdio.h>

int factorial(int);
double power(double, int);

int main(){
    int  n ,y , f  , i  ;
    double num , pw, sum = 0 , sign;
    printf("\n\nEnter the value of X in e^x and upto which term to iterate the series of e^x: ");
    scanf("%lf %d",&num ,&n);
    for (i =0 ; i<n ; i++){
        pw= power(num ,i );
        f = factorial(i);
        sum = sum +  ( pw/f);
    }
    printf("The value from the series is : %lf\n\n",sum);
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
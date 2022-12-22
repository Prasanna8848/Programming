#include<stdio.h>

double power(double , int);

int main(){
  double x ,pw ;
  int n;
  printf("\n\nEnter any two numbers to find the the X^Y = ");
  scanf("%lf %d",&x,&n);
  pw = power(x ,n);
  printf("%.3lf ^ %d = %.3lf\n\n", x , n , pw);
  return 0;
}

double power(double a,int b){
  int i ;
  double p=1;
    for (i = 0 ; i < b ; i++){
        p =(float) p * a;
    }
  return p;
} 
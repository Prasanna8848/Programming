#include<stdio.h>
#include <string.h>

int main(){
  char arr[100];
  char *pa;
  int i ;
  printf("Enter any string to print in reverse order =");
  gets(arr);
  pa = arr;
  i= strlen(arr);
  printf("The reversed string is :");
  while (i >=0){
    printf("%c",*(pa+i));
    i--;
    }
  }
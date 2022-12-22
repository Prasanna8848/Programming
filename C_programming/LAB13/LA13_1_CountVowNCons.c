#include<stdio.h>
#include<string.h>

int main(){
  char arr[100];
  char *pa;
  int i=0 , vcount = 0, concount = 0;
  printf("Enter any sentence to count no. of vowels and consonants =");
  gets(arr);
  pa = arr;
  while (*(pa+ i) !='\0'){
    if ((*(pa+i) =='a') || (*(pa+i) =='e') || (*(pa+i) =='i') || (*(pa+i) =='o') || (*(pa+i) =='u')  
    || (*(pa+i) =='A') || (*(pa+i) =='E') || (*(pa+i) =='I') || (*(pa+i) =='O') || (*(pa+i) =='U')){
      vcount++;
    }
    else if ((*(pa+i)>= 'A') &&(*(pa+i)>= 'Z') ||(*(pa+i)>= 'a') &&(*(pa+i)>= 'z')) {
      concount++;
    }
    i++;
  }
  printf("No. of Vowels = %d and No. of consonants = %d",vcount , concount);
}
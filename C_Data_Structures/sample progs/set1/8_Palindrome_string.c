#include<stdio.h>
#include<string.h>

int palindrome(char*);

void main(void){
    char a[100];
    int bool;
    printf("\nEnter the string to find weather it is palindrome or not :");
    scanf("%s",a);
    bool=palindrome(a);
    if(bool ==1){
        printf("The given string \"%s\" is a palindrome ",a);
    }
    else{
        printf("The given string \"%s\" is not a palindrome ",a);
    }
}

int palindrome(char *arr){
    char b[100];
    int l , i,n;
    l = strlen(arr);
    n=l-1;
    for(i =0 ; i<l ;i++){
        b[n--]=*(arr+i);
    }
    b[i]='\0';
    if(strcmp(arr,b) ==0){
        return 1;
    }
    else{
        return 0;
    }
}
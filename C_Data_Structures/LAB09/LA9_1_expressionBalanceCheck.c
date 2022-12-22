#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int top_of_stack = -1;
int size =100;
void push(char);
void pop();
char stack1[100];

int main(){
    int i=0;
    char arr[100];
    printf("Enter the expression without any space:");
    scanf("%s",arr);
    push('(');
    strcat(arr,")");
    while(*(arr+i)!='\0'){
        if(((*(stack1+top_of_stack)=='+'||*(stack1+top_of_stack)=='-'||*(stack1+top_of_stack)=='/'||*(stack1+top_of_stack)=='*'||*(stack1+top_of_stack)=='^')
        &&(*(arr+i)=='+'||*(arr+i)=='-'||*(arr+i)=='/'||*(arr+i)=='*'||*(arr+i)=='^'))){
            printf("unbalanced");
            exit(0);
        }
        else if((isdigit(*(arr+i))) && (isdigit(*(stack1+top_of_stack)))){
            printf("unbalanced");
            exit(0);
        }
        else{
            if(*(arr+i)!=')'){
                push((arr[i]));
            }
            else{
                while(*(stack1+top_of_stack)!='('){
                    pop();
                }
                pop();
            }
        }
        i++; 
    }
    if(top_of_stack==-1){
        printf("Balanced");
    }
    else{
        printf("unbalanced");
    }
    }

void push(char a){
    if(top_of_stack==(size-1)){
        printf("\nOVERFLOW");
    }
    else{
        top_of_stack++;
        stack1[top_of_stack]=a;
    }
}

void pop(){
    if(top_of_stack ==-1){
        printf("\nUNDERFLOW");
    }
    else{
        top_of_stack--;
    }
}
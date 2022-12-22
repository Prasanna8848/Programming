//Wap to reverse a string using a stack.
#include<stdio.h>
#include<string.h>
int top_of_stack = -1;
void push(char *, char*);
void pop(char*);
int size = 100;

int main(){
    int i=0;
    char arr[size], stack[size];
    printf("\nEnter the string:");
    scanf("%s",arr);
    int s= strlen(arr);
    while(i!=s){
        push(arr+i,stack);
        i++;
    }
    while(top_of_stack!=-1){
        pop(stack);
    }
}

void push(char* a,char* stack){
    if(top_of_stack==(size-1)){
        printf("\nOVERFLOW");
    }
    else{
        top_of_stack++;
        stack[top_of_stack]=a[0];
    }
}

void pop(char *stack){
    if(top_of_stack ==-1){
        printf("\nUNDERFLOW");
    }
    else{
        printf("%c",stack[top_of_stack]);
        top_of_stack--;
    }
}
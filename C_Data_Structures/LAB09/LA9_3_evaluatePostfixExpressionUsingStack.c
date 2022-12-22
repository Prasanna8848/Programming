//wap to evaluate postfix expression using stack.
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int top_of_stack = -1;
int size =100;
void push(int);
int pop();
int stack1[100];

int main(){
    char term;
    int i=0,o1,o2;
    char arr[100];
    printf("Enter the expression without any space:");
    scanf("%s",arr);
    while(*(arr+i)!='\0'){
        if((isdigit(*(arr+i)))>0){
            term  =*(arr+i);
            push(term-'0');
        }
        else if(*(arr+i)=='+'||*(arr+i)=='-'||*(arr+i)=='/'||*(arr+i)=='*'||*(arr+i)=='^'){
            o1 =pop();
            o2=pop();
            switch (*(arr+i)){
                case '+':
                    o2=o2+o1;
                    push(o2);
                    break;
                case '-':
                    o2=o2-o1;
                    push(o2);
                    break;
                case '*':
                    o2=o2*o1;
                    push(o2);
                    break;
                case '/':
                    o2=o2/o1;
                    push(o2);
                    break;
                
                case '^':
                    o2=pow(o2,o1);
                    push((int)o2);
                    break;
                default:
                break;
            }
        }
        i++;
    }
    printf("\nThe output is :%d",pop());
}

void push(int a){
    if(top_of_stack==(size-1)){
        printf("\nOVERFLOW");
    }
    else{
        top_of_stack++;
        stack1[top_of_stack]=a;
    }
}

int pop(){
    if(top_of_stack ==-1){
        printf("\nUNDERFLOW");
    }
    else{   
    return stack1[top_of_stack--];
    }
}
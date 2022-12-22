#include<stdio.h>

void numbersort(int ,int , int);
void main(){
    int a , b , c;
    printf("\nEnter any three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    numbersort(a,b,c);
}

void numbersort(int a,int b, int c){
    int b1 ,b2;
    b1=a>b && a>c;
    b2=b>c;
    switch (b1)
    {
    case 1 :
    printf("The biggest number is %d",a);
        break;
    case 0:
        switch (b2)
        {
        case 1:
            printf("The biggest number is %d",b);
            break;
        case 0:
            printf("The biggest number is %d",c);
            break;
        default:
            break;
        }
    default:
        break;
    }
}

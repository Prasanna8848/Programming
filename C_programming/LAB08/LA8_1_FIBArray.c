#include <stdio.h>

int main()
{
    int index , j , count , num ;
    printf("\nEnter the size of array : ");
    scanf("%d",&index);
    int fib[index];
    fib[0] = 1 ;
    fib[1] = 1 ;
    count = index-2;
    for (j = 0 ; j < count ; j++ ){
        fib[j+2] = fib [j+1] + fib[j];
    }
    printf("The %d numbers in  fibonacci sequence is\n", index);
    for (num =0 ; num < index ; num++){
        printf(" %d ",fib[num]);
    }
    printf("\n\n");
    return 0;
}

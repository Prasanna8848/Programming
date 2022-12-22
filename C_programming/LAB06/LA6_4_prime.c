#include<stdio.h>
#include<math.h>

int main(){
    //program to display whether the input program is prime or not.
    int i3439 ,j3439 ,n3439 ,flag3439 = 0;
    printf("\n\nEnter the number :");
    scanf("%d", &n3439);
    if (n3439 <= 1){
        printf("%d is neither prime nor composite.\n\n",n3439);
        flag3439 = 1;
    }
    if (n3439 ==2){
        printf("2 is a prime number.\n\n");
        flag3439 = 1;
    }
    for (i3439 = 2 ; i3439 <= sqrt(n3439) ; i3439++){
        if (n3439 %i3439 == 0){
            printf("%d is a composite number.\n\n",n3439);
            flag3439 = 1;
            break;
            return 0;
        }
        }
        if (flag3439 == 0){
            printf("%d is prime number.\n\n",n3439);
        }
    return 0;
}

#include <stdio.h>

int main() {
    int maths3439 , physics3439 , chemistry3439 , sumall3439 , sumtwo3439;
    printf("\n\nEnter your marks in Maths, Physics and Chemistry :\n");
    scanf("%d %d %d", &maths3439 , &physics3439 , &chemistry3439);
    sumall3439 = maths3439 + physics3439 + chemistry3439;
    sumtwo3439 = maths3439 + physics3439;
    if (maths3439 >= 65 && physics3439 >=55 && chemistry3439 >= 50){
        if (sumall3439 >= 190 || sumtwo3439 >= 140){
            printf("You are eligible for the admission in a professional course.\n\n");
        }
        else{
            printf("You are not eligible for the admission in a professional course.\n\n");
        }
    }
    else{
        printf("You are not eligible for the admission in a professional course\n\n");
    }
    return 0;
}

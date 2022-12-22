#include <stdio.h>

int main() {
    int sub13439 , sub23439 , sub33439 , sub43439 , sub53439 , sum3439 ;
    float avg3439 , percentage3439;
    printf("\n\nEnter your marks of all five subjects :\n");
    scanf("%d %d %d %d %d", &sub13439 , &sub23439 , &sub33439 , &sub43439 , &sub53439);
    if (sub13439<=100 && sub23439<=100 && sub33439<=100 && sub43439<=100 && sub53439<=100 ){
        sum3439 = sub13439 + sub23439 + sub33439 + sub43439 + sub53439;
        avg3439 = (float)sum3439 / 5;
        percentage3439 = ((float)sum3439/500)*100;
        printf("The average marks obtained by the student is %.3f . \n\n ",avg3439);
        printf("The percentage obtained by the student is %.3f %% . \n\n ",percentage3439);
    }
    else{
        printf("The marks are invalid, Try again!!");
    }
    return 0;
}

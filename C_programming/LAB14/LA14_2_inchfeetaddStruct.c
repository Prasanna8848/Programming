#include<stdio.h>

struct feet_inch{
    int feet;
    int inches;
};

int main(){
    struct feet_inch fi1 , fi2 ,fi;
    fi.feet =0;
    fi.inches =0;
    printf("\n\nProgram to add two distances in feet and inches :\n");
    printf("Enter the first distance in format( feet inch ) :");
    scanf("%d %d", &fi1.feet ,&fi1.inches);
    printf("Enter the second distance in format( feet inch ) :");
    scanf("%d %d", &fi2.feet ,&fi2.inches);
    fi.feet = fi1.feet + fi2.feet;
    if ((fi.inches =fi1.inches +fi2.inches) >=12){
        fi.feet += (fi.inches / 12);
        fi.inches = (fi.inches % 12);
    }
    printf("After addition of two distance Output :\nFeet = %d \nInches = %d \n\n" ,fi.feet , fi.inches );
}
#include<stdio.h>

int main(){
    int units3439 ;
    float charges3439=0;
    printf("\n\nEnter the number of units consumed by the customer : ");
    scanf("%d", &units3439);
    if (units3439 <= 149){
        charges3439 = units3439 * 2;
    }
    else if(units3439>=150 && units3439<=299){
        charges3439 = (2 * 149) + (3 * (units3439 - 149));
    }
    else if(units3439>=300 && units3439<=599){
        charges3439 = (2 * 149) + (3 * (150)) + (4 * (units3439 - 299));
    }
    else {
        charges3439 = (2 * 149) + (3 * (150)) + (4 * (300))+(5 * (units3439 - 599));
    }
    if (charges3439 <= 150){
        charges3439 = 150;
        printf("The minimum charge for electricity usuage is Rs. %.3f .\n\n ", charges3439);
    }
    else if (charges3439 > 150 && charges3439 <= 500 ){
        printf("The total charge for electricity usuage is Rs. %.3f . \n\n",charges3439);
    }
    else if (charges3439 > 500){
        charges3439 += (0.25 * charges3439);
        printf("The total charge for electricity usuage with surcharge of 25%% is Rs. %.3f .\n\n:", charges3439);
    }
    return 0;    
}
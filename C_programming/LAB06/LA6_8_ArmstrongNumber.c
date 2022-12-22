#include <stdio.h>
#include<math.h>

int main(){
    //program to display whether the number is armstrong number or not.
    int n3439, out3439 = 0 , count3439 =0, temp3439=0, temp23439 =0 , o3439=0;
    printf("\n\nEnter the number to be checked for :");
    scanf("%d", &n3439);
    temp3439 = n3439;
    o3439 = n3439;
    while (n3439 != 0){
        count3439 +=1 ;
        n3439 /= 10;
    }
    while (temp3439 != 0){
        temp23439 = (temp3439 % 10);
        out3439 += pow(temp23439,count3439) ;
        temp3439 /= 10;
    }
    if (out3439 == o3439){
       printf("The number %d is a armstrong  number. \n\n",o3439); 
    }
    else{
        printf("The number %d is not a armstrong  number. \n\n",o3439); 
    }
    return 0;
}


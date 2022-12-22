#include<stdio.h>
    int main(){
        int i3439 , j3439 , num13439, num23439 ,temp3439, hcf3439=0;
        printf("\n\nEnter any two integers to find hcf :\n");
        scanf("%d %d",&num13439,&num23439);
        if (num13439>num23439){
            temp3439 = num23439;
        }
        else{
            temp3439 = num23439;
        }
        for(i3439 = 1 ; i3439 < temp3439 ; i3439++){
            if ((num13439 % i3439 == 0) && (num23439 % i3439 == 0)){
                hcf3439 =i3439;
            }
        }
        printf("the GCD/HCF of the two numbers is : %d \n\n",hcf3439 );
    return 0;
    }
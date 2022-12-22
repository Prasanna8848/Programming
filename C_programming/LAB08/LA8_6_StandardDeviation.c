#include <stdio.h>
#include <math.h>

int main(){
    int i , num , j=0, k  ;

    float avg =0.0 ,sum=0.0 , nummean=0.0 , sqsum=0.0  , stddev=0.0;
    printf("\n\nEnter the number of integers to be added in array : ");
    scanf("%d",&num);
    float arr[num];
    printf("Enter %d numbers to be stored in the array :\n",num);
    for (k=0 ; k< num ; k++){
        scanf("%f",&arr[k]);
    }
    for (i = 0 ; i<num ; i++){
        sum += arr[i];
    }
    avg = (float) (sum / num);

    for (j = 0 ; j<num ; j++){
        nummean = (float)(arr[j] - avg);
        sqsum += (nummean * nummean);
    }
    stddev = sqrt(sqsum /num);
    printf("The standard deviation of the data is : %.3f \n\n",stddev);
}
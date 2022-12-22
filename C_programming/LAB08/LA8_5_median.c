#include <stdio.h>

int main(){
    int i , num , j=0, k , temp , mid ;
    float median;
    printf("\n\nEnter the number of integers to be added in array : ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d numbers to be stored in the array :\n",num);
    for (k=0 ; k< num ; k++){
        scanf("%d",&arr[k]);
    }
    for (i=0 ; i < (num-1) ; i++ ){
        j=i+1;
        temp = arr[j];
        while ((temp < arr[j-1]) && (j>0)){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]= temp;
    }
    if (num % 2 != 0){
        mid = num / 2;
        printf("The median is : %d\n\n ",arr[mid]);
    }
    else{
        mid = ((num-1) / 2);
        median = (float) (arr[mid] + arr[mid + 1])  / 2;
        printf("The median is between %d and %d.\nThe average of both is %.2f\n ", arr[mid] , arr[mid+1] , median);
    }
}
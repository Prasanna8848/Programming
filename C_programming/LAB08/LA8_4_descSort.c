#include <stdio.h>

int main(){
    int i , num , j , k , temp , index;
    printf("\n\nEnter the number of integers to be added in array : ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d numbers to be stored in the array :\n",num);
    for (k=0 ; k< num ; k++){
        scanf("%d",&arr[k]);
    }
    for (i = 0 ; i< (num-1) ; i++ ){
        temp=arr[i];
        for (j = i ; j < (num-1) ; j++){
            if (arr[j+1] > temp){
                temp = arr[j+1];
                index = j+1;
            }
        }
        if (arr[i] !=temp){
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
     for (k = 0; k < num ;k++ ){
        printf("index [%d] is  %d\n", k, arr[k] );
    }
}
#include <stdio.h>

int main(){
    int index, i , j ,k , temp =0 , flag =0;
    printf("\n\nEnter the number of elements to be added in array :");
    scanf("%d",&index);
    int arr[index];
    printf("Enter the %d elements in the array :\n", index);
    for (i = 0; i < index ;i++ ){
        scanf("%d", &arr[i]);
    }
    for (j = 0 ; j < (index-1) ; j++){
        for (k =0 ; k < ((index-j)-1) ; k++){
            if ((arr[k+1] % 2 == 1)&& (arr[k] %2==0)){
              temp = arr[k];
              arr[k]= arr[k+1];
              arr[k+1]=temp;
    }
    }
    }
     for (i = 0; i < index ;i++ ){
        printf("index [%d] is  %d\n", i, arr[i] );
    }
    printf("\n\n");
    return 0;
}
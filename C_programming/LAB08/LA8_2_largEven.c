#include <stdio.h>

int main()
{
    int index, i , j , larg , largi , flag =0;
    printf("\n\nEnter the number of elements to be added in array :");
    scanf("%d",&index);
    int arr[index];
    printf("Enter the %d elements in the array :\n", index);
    for (i = 0; i < index ;i++ ){
        scanf("%d", &arr[i]);
    }
    larg = 0;
    largi = 0;
    for (j = 0 ; j < index ; j++){
        if ((arr[j] > larg) && (arr[j] % 2 == 0)){
            larg = arr[j];
            largi = j ;
            flag = 1 ;
        }
    }
    if (flag == 0){
        printf("No even number in the given numbers\n\n");
    }
    else{
        printf("The largest even number is %d\n", larg);
        printf("The largest even numbers index in the array is %d\n\n", (largi));
    }
    return 0;
}

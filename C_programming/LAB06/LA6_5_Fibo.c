#include <stdio.h>

int main(){
    //program to display fibonacci sequence.
    int i3439, n3439, a3439 = 1, b3439 = 1, temp3439;
    printf("\n\nEnter the number of terms in the sequence :");
    scanf("%d", &n3439);
    if (n3439 < 2){
        printf("Invalid Input");
    }
    else{
        printf("1, 1");
    }
    for (i3439 = 2 ; i3439 < n3439 ; i3439++){
        temp3439 = b3439;
        b3439 = a3439 + b3439;
        a3439 = temp3439;
        printf(", %d" ,b3439);
    }
    printf("\n\n");
    return 0;
}

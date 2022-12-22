#include<stdio.h>

int main(){
    int i ,n=0 ,temp;
    int a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    for ( i = 0; i < 14;i=(i+n+2) ){
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        n +=1;
    }
    for ( i = 0; i < 14; i++){
        printf("%d\t",a[i]);
    }
}
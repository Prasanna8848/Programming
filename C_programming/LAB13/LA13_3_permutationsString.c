#include<stdio.h>
#include<string.h>
void swap(char * , char *);
void perm(char * ,int ,int);
int main(){
    int i , j=0 ;
    char arr[100];
    printf("Enter letter to get permutations :");
    scanf("%s",arr);
    printf("%s",arr);
    i= (strlen(arr)-1);
    perm(arr,i,j);
    return 0;
}

void perm(char *a ,int k ,int l){
    int i;
    if (l==k){
        printf("%s\n",a);
    }
    else{
        for (i = l; i <= k; i++){
            swap((a+l), (a+i));
            perm(a, k, l+1);
            swap((a+l), (a+i));
        }
    }
}

void swap(char *x, char *y){
    {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
}
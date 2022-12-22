#include<stdio.h>
#include<string.h>

void main(){
    int n,i,j,bol;
    char arr[100] ,b;
    printf("Enter the string : ");
    scanf("%s",arr);
    n=strlen(arr);
    for(i=0;i<n;i++){
        if(arr[i]=='\0'){
            continue;
        }
        b=arr[i];
        bol=0;
        for(j=i;j<n;j++){
            if(arr[j]==b){
                bol++;
                arr[j]='\0';
            }
        }
        printf("\nThe frequency of character\" %c\" in the array is %d",b,bol);
    }
}
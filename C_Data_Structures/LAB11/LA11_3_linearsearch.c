//WAP to implement Linear search

#include<stdio.h>
int linearsearch(int*,int ,int);

int main(){
    int n, i,data,loc;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the ascending order in the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the data to find in the array:");
    scanf("%d",&data);
    loc=linearsearch(arr,n,data);
    if(loc==-1){
        printf("\nData not found!!");
    }
    else{
        printf("The data %d was found in %d location of the array!!",data,loc);
    }
    return 0;
}

int linearsearch(int* a,int n,int data){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==data){
            return i;
        }
    }
    return -1;
}
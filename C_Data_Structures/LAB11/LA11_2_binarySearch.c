//WAP to implement Binary search

#include<stdio.h>
int binarysearch(int*,int ,int);

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
    loc=binarysearch(arr,n,data);
    if(loc==-1){
        printf("\nData not found!!");
    }
    else{
        printf("The data %d was found in %d location of the array!!",data,loc);
    }
    return 0;
}

int binarysearch(int* a,int n,int data){
    int lb=0,ub=n-1,mid;
    while(lb<=ub){
        mid = (lb+ub)/2;
        if(a[mid]==data){
            return mid;
        }
        else if(a[mid]>data){
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
    }
    return -1;
}
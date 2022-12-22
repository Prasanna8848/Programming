#include<iostream>
using namespace std;

void swap(int& ,int&);

int main(void){
    int a , b;
    cout<<"\nEnter two integers : ";
    cin>>a>>b;
    cout<<"\n\nBefore swapping\nfirst integer is  :"<<a<<"\nSecond integer is :"<<b;
    swap(a,b);
    cout<<"\n\nAfter swapping\nfirst integer is  :"<<a<<"\nSecond integer is :"<<b;
}

void swap(int& x , int& y){
    int temp;
    temp =y;
    y=x;
    x=temp;
}
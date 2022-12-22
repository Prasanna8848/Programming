//WAP to demonstrate catch all exception
#include<iostream>
using namespace std;

int main(){
    float a=10, b=0,c=0;
    try{
        if(a==0){
            throw a;
        }
        else if(b==0){
            throw "denominator is 0";
        }
        cout<<(a/b);
    }
    catch(...){
        cout<<"Exception encountered";
    }
}
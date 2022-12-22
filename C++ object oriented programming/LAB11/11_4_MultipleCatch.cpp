//WAP to demonstrate multiple catch 
#include<iostream>
using namespace std;

int main(){
    float a=0, b=0,c=0;
    try{
        if(a==0){
            throw 0;
        }
        else if(b==0){
            throw "Attempted to divide by 0";
        }
        cout<<(a/b);
    }
    catch(char const* e){
        cerr<<e;
    }
    catch(int x){
        cerr<<"Numerator is zero";
    }
}
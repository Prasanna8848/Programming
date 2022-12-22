//WAP to throw and handle 'division by zero' exception.
#include<iostream>
using namespace std;


float division(float x, float y);

int main(){
    float a=10,b=0 , c=0;
    try{
        c=division(a,b);
        cout<<"\nThe answer is "<<c;
    }
    catch(char const* e){
        cout<<"\n"<<e<<endl;
    }
    return 0;
}

float division(float x, float y){
    if(y==0){
        throw "Attempted to divide by zero";
    }
   return(x/y);
}
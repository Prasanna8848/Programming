//WAP to throw and handle 'array out of bound' exception.
#include<iostream>
using namespace std;

int main(){
    int arr[10], index=10;
    index++;
    try{
        if(index>10 ||index<0){
            throw "'array out of bound'";
        }
        cout<<arr[index];
    }
    catch(char const* e){
        cerr<<"\n"<<e<<endl;
    }
    return 0;
}

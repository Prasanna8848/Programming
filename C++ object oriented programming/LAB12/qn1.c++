//1) WAP to read the contents of a file and display in the screen

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char c;
    ifstream file1;
    file1.open("TEXT.txt");
    if(!file1){
        cout<<"File doesnot exist";
    }
    else{
        while(file1.eof()==0){
            c= file1.get();
            cout<<c;
        }
        file1.close();
    }
    return 0;
}

//4)WAP to copy the contents of one file to other.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char c;
    ofstream file1;
    ifstream file2;
    file1.open("TEXT1.txt");
    file2.open("TEXT.txt");
    if(!file2){
        cout<<"Input File doesnot exist";
    }
    else{
        while(file2.eof()==0)
        {
            c = file2.get();
            file1.put(c);
        }
        file1.close();
        file2.close();
        cout<<"The file is successfully copied!";
    }
}
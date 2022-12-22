//3)WAP to append the contents of one file to other.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    char c[30];
    ofstream file1;
    file1.open("TEXT1.txt",ios::app);
        cout<<"Enter strings to put at the last of file :\n";
            cin.getline(c,30);
            file1<<c;
        file1.close();
        cout<<"Contents appended to the file.";
}
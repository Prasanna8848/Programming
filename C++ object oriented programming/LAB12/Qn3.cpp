//2)WAP to write the contents in a file input from keyboard.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char c;
    ofstream file1;
    file1.open("TEXT1.txt",ios::out);
        cout<<"Enter strings :\n";
        cin.get(c);
        do{
            file1.put(c);
            cin.get(c);
        }while(c!='\n');
        file1.close();
        cout<<"Contents written to the file.";
}

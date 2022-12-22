//WAP that asks the user for a list of five names, then writes the names to a
//file. Rewind the file and display its contents on-screen using the seekg()
//and get() functions.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char c[30];
    fstream file1;
    file1.open("TEXT2.txt",ios::out|ios::in);
    if(!file1){
        cout<<"File not found";
    }
    else{
        cout<<"\nEnter any five names: ";
        for(int i=0;i<5;i++){
            cin.getline(c,30);
            file1<<c<<endl;
        }
        cout<<"data successfully written into the files!\n Names are:\n";
        file1.seekg(0,ios::beg);
        for(int i=0;i<5;i++){
            file1.getline(c,30);
            cout<<"\n"<<c<<endl;
        }
            file1.close();
    }
}
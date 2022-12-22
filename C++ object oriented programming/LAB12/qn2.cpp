//8) WAP to read the contents of a file and count the number of characters,
//blanks, tabs and lines in the screen and display it in the screen.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int spacecount=0, linesCount=1, NoCharacter=0,nTabs=0;
    char c;
    ifstream file1;
    file1.open("TEXT.txt",ios::in);
    if(!file1){
        cout<<"File doesnot exist";
    }
    else{
        while(file1.eof()==0){
            c= file1.get();
            if(c==' '){
                 spacecount++;
            }
            else if(c=='\n'){
                linesCount++;
            }
            else if(c=='\t'){
                nTabs++;
            }
            else{
                NoCharacter++;
            }
        }
        cout<<"\nNumber of characters: "<<NoCharacter;
        cout<<"\nNumber of spaces: "<<spacecount;
        cout<<"\nNumber of tabs: "<<nTabs;
        cout<<"\nNumber of lines: "<<linesCount;
        file1.close();
    }
}

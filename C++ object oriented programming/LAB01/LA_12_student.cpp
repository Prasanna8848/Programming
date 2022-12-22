#include<iostream>
using namespace std;

class student{
    public :
        string name;
        int rollno;
        int totalmarks;
};           
       
int main(void){
    student s1;
    cout<<"\n\nEnter the name of the student :";
    cin>>s1.name ;
    cout<<"Enter the roll no :";
    cin>>s1.rollno;
    cout<<"Enter the total marks obtained :";
    cin>>s1.totalmarks;
    cout<<"\n\nName: "<<s1.name;
    cout<<"\nRoll No :"<<s1.rollno;
    cout<<"\nTotal Marks :"<<s1.totalmarks << "\n\n";
    return 0;
}
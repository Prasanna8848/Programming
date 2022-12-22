#include<iostream>
using namespace std;

class student{
    public :
    string name;
    int rollno, marks[5];
    float totalmarks, percentage;
    student(){
        totalmarks =0;
    }
    void calc();
    void getdata();
    void setdata();
};        

void student::calc(){
    int i;
    for (i=0; i<=4 ;i++){
        totalmarks += marks[i];
    }
    percentage = ((totalmarks * 100)/500); 
}

void student::getdata(){
    cout<<"\n\nName: "<<name;
    cout<<"\nRoll No :"<<rollno;
    cout<<"\nTotal Marks :"<<totalmarks ;
    cout<<"\npercentage obtained :"<<percentage << "\n";
}

void student::setdata(){
    int j;
    cout<<"\nEnter the name of the student :";
    cin>>name ;
    cout<<"Enter the roll no :";
    cin>>rollno;
    cout<<"Enter marks obtained in 5 subjects:";
    for (j=0; j<=4 ;j++){
        cin>>marks[j];
    }
}
       
int main(void){
    int i ,j;
    student s[5];
    for (i =0 ;i<=4 ;i++){
        cout<<"\n\nEnter details for student"<<(i+1)<<".";
        s[i].setdata();
        s[i].calc();
    }
    for (i =0 ;i<=4 ;i++){
        cout<<"\nDetails for student "<<(i+1)<<".";
        s[i].getdata();
    }
    return 0;
}
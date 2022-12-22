#include<iostream>
#include<string.h>
using namespace std;

class student{
    protected:
    char name[25];
    int rollno;
    int age;
    public:
    void displaystu();        
};

void student::displaystu(){
    cout<<"\nName : "<<name;
    cout<<"\nRoll No : "<<rollno;
    cout<<"\nAge : "<<age;
}

class test:public student{
    protected:
    int marks[5];
    public:
    void setdata();
    void displaytest();
};

void test::setdata(){
    cout<<"\n\nEnter the details of the student";
    cout<<"\nEnter Name : ";
    cin>>name;
    cout<<"\nEnter Roll No. and Age : ";
    cin>>rollno>>age;
    cout<<"\nEnter Marks in 5 subjects : ";
    for(int i = 0;i<5;i++){
        cin>>marks[i];
    }
}
void test::displaytest(){
    cout<<"\n\nStudent details";
    displaystu();
    cout<<"\nMarks in 5 subjects are :";
    for(int i=0;i<5;i++){
        cout<<" "<<marks[i];
    } 
}

class sports{
    protected:
        int sportsmarks;
};

class result:public test,public sports{
    private:
    int totalmarks;
    float precentage;
    public:
    result(){
        totalmarks =0;
        setdata();
        cout<<"\nEnter marks for sports:";
        cin>>sportsmarks;
        calc();
    }
    void calc();
    void displaydata();
};

void result::calc(){
    for(int i =0;i<5;i++){
        totalmarks +=marks[i];
    }
    totalmarks += sportsmarks;
    precentage =(float) (totalmarks*100)/600;
}

void result::displaydata(){
    displaytest();
    cout<<"\nTotal Marks : "<<totalmarks;
    cout<<"\nPercentage : "<<precentage<<" %";
}

int main(){
    result r1;
    r1.displaydata();
    return 0;
}
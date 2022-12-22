#include<iostream>
#include<string.h>
using namespace std;

class student{
    protected:
    char name[25];
    int rollno;
    int age;
    public:
    student(){
    }
    void displaystu();        
};

void student::displaystu(){
    cout<<"\nName : "<<name;
    cout<<"\nRoll No : "<<rollno;
    cout<<"\nAge : "<<age;
}

class test:public student{
    private:
    int marks[5];
    public:
    void setdata(char *n, int r, int a,int m[5]){
        strcpy(name,n);
        rollno  = r;
        age =a;
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
    }
    void setdata();
    void displaytest();
    ~test(){
        cout<<"\nTest Destructor Initiated";
    }
};

void test::setdata(){
    cout<<"Enter the details of the student";
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
    cout<<"Marks in 5 subjects are :";
    for(int i=0;i<5;i++){
        cout<<" "<<marks[i];
    } 
}

int main(){
    test t1,t2;
    t1.setdata();
    t2.setdata();
    t1.displaytest();
    t2.displaytest();
    return 0;
}
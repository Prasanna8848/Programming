#include<iostream>
#include<string.h>
using namespace std;

class student{
    protected:
    char name[25];
    int rollno;
    int age;
    public:
    student(char *n,int r ,int a){
        strcpy(name,n);
        rollno = r;
        age = a;
    }
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
    test(char *n,int r , int a, int arr[5]):
    student(n ,r , a){
        for(int i = 0 ; i < 5;i++){
            marks[i] = arr[i]; 
        }
    }
    void displaytest();
};

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
    public:
    sports(int s){
        sportsmarks =s;
    }
};

class result:public test,public sports{
    private:
    int totalmarks;
    float precentage;
    public:
    result(char *n,int r , int a, int arr[5],int s):
    sports(s),test(n,r,a,arr){
        totalmarks =0;
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
    int marks[5]={70,89,67,89,55};
    char name[] ="david";
    result r1(name,21,13,marks,89);
    r1.displaydata();
    return 0;
}
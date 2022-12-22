#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int rollno;
    int totalmarks;
    static int totalavg;
    public:
    static void average(int);
    void setdata();
};

void student::average(int n){
    int avg;
    avg =(totalavg)/n;
    cout<<"\n\nTotal average marks obtained by the students is : "<<avg;
}

void student::setdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter roll no : ";
    cin>>rollno;
    cout<<"Enter total marks : ";
    cin>>totalmarks;
    totalavg +=totalmarks;
}

int student::totalavg = 0;

int main(void){
    int n ,i;
    cout<<"Enter the number of students : ";
    cin>>n;
    student s[n];
    for(i=0 ; i<n ;i++){
        cout<<"\nEnter details of student "<<(i+1)<<".\n";
        s[i].setdata();
    }
    student::average(n);
    return 0;
}
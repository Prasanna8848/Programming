#include<iostream>
using namespace std;

class employee{
    protected:
        char name[25];
        int id;
        float salary;
    public:
        void esetdata();
        void getdata();
};

void employee::esetdata(){
    cout<<"\n\nEnter the details of the employee.";
    cout<<"\nEnter name : ";
    cin>>name;
    cout<<"Enter employee id : ";
    cin>>id;
}

void employee::getdata(){
    cout<<"\n\nEmployee detail";
    cout<<"\nName : "<<name;
    cout<<"\nEmployee id : "<<id;
    cout<<"\nSalary :"<<salary;
}

class regular:public employee{
    protected:
        float da;
        float hra;
        float basicsalary;
    public:
        void setdata();
        void getdata();
        void calcbasicsalary();
};

void regular::setdata(){
    esetdata();
    cout<<"Enter basic salary : ";
    cin>>basicsalary;
    cout<<"Enter the DA and HRA amount : ";
    cin>>da>>hra;
    calcbasicsalary();
}

void regular::calcbasicsalary(){
    salary = basicsalary + hra + da;
}


class parttime:public employee{
    protected:
        int no_hours;
        float payperhour;
    public:
        void setdata();
        void calcsalary();
};

void parttime::setdata(){
    esetdata();
    cout<<"Enter the no. of hours part time employee worked : ";
    cin>>no_hours;
    cout<<"Enter pay per hour to the employee : ";
    cin>>payperhour;
    calcsalary();
}
void parttime::calcsalary(){
    salary = no_hours*payperhour;
}


int main(){
    regular r1;
    parttime p1;
    r1.regular::setdata();
    p1.parttime::setdata();
    cout<<"\nRegular Employee :";
    r1.employee::getdata();
    cout<<"\nPart time Employee :";
    p1.employee::getdata();
    return 0;
}
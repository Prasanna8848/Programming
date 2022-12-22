#include<iostream>
using namespace std;

class employee{
    private:
        string name;
        int id, age, basicsalary, grosssalary;
    public:
        void setdata();
        void calcgross();
        void display();
};

void employee::setdata(){
    cin>>id>>name>>age>>basicsalary;
}

void employee::calcgross(){
    grosssalary = basicsalary + (0.80 * basicsalary) + (0.10 * basicsalary);
}

void employee::display(){
    cout<<"\n"<<id<<"\t"<<name<<"\t"<<age<<"\t"<<basicsalary<<"\t\t"<<grosssalary;
}

int main(){
    int i , n;
    cout<<"Enter the number of employees : ";
    cin>>n;
    employee e[n];
    cout<<"Input data of all the employee:\n";
    cout<<"data\tId\tName\tAge\tBasic Salary\n";
    for (i=0 ; i<n ; i++){
        cout<<(i+1)<<"\t";
        e[i].setdata();
        e[i].calcgross();
    }
    cout<<"\n\nDetails of employees!\n\n";
    cout<<"Id\tName\tAge\tBasic Salary\tGross salary";
    for(i =0 ; i<n ;i++){
        e[i].display();
    }
    return 0;
}
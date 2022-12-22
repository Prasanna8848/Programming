#include<iostream>
using namespace std;

class account{
    protected:
        int account_number;
        char name[25];
        int balance;
    public:
        void bsetdata();
        void bgetdata();
};

void account::bsetdata(){
    cout<<"\n\nEnter bank details : ";
    cout<<"\nEnter bank account number : ";
    cin>>account_number;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter the balance : ";
    cin>>balance;
}

void account::bgetdata(){
    cout<<"\nBank account number :"<<account_number;
    cout<<"\nName : "<<name;
    cout<<"\nBalance : "<<balance;
}

class savings:public account{
    protected:
        int minimum;
    public:
    void setdata();
    void display();
    void deposit(int);
    void withdraw(int);
};

void savings::setdata(){
    cout<<"\nEnter details for savings account :";
    bsetdata();
    cout<<"Enter the minimum balance required : ";
    cin>>minimum;
}

void savings::display(){
    cout<<"\n\nBank details for savings account : ";
    bgetdata();
}
void savings::deposit(int x){
    balance +=x;
    cout<<x<<" amount deposited successfully";
}

void savings::withdraw(int x){
    if((balance-x)<minimum){
        cout<<"\nBalance is not enough";
    }
    else{
        balance -=x;
        cout<<"\nAmount withdrawn successfully";
    }
}

class current:public account{
    protected:
        int overdue;
    public:
    void setdata();
    void display();
    void deposit(int);
    void withdraw(int);
};

void current::setdata(){
    cout<<"\nEnter details for current account :";
    bsetdata();
    cout<<"Enter the over due amount : ";
    cin>>overdue;
}

void current::display(){
    cout<<"\n\nBank details for current account : ";
    bgetdata();
    cout<<"The overdue amount is : "<<overdue;
}
void current::deposit(int x){
    balance +=x;
    cout<<x<<" amount deposited successfully";
}

void current::withdraw(int x){
    if(balance == 0){
        overdue = x;
    }
    else if (balance < overdue){
        overdue = x-balance;
        balance -=x;
    }
    else{
        balance -=x;
    }
    cout<<"\nAmount withdrawn successfully";
}

int main(){
    savings s1;
    current c1;
    s1.savings::setdata();
    s1.savings::deposit(10000);
    s1.savings::withdraw(9000);
    s1.savings::display();
    c1.current::setdata();
    c1.current::deposit(150000);
    c1.current::withdraw(5000);
    c1.current::display();
}
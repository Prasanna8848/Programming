/*Q6 Assume that a bank maintains two kind of accounts for customers, one called as
savings account and the other as current account. The savings account provides
compound interest and withdrawal facilities but no cheque book facility. The current
account provides cheque book facility but no interest. Current account holders should
also maintain a minimum balance and if the balance falls below this level, a service
charge is imposed.
Create a class Account that stores customer_name, account_no and account_type.
From this, derive the classes Current_Account and Saving_Account to make them
more specific to their requirements. Include necessary member functions in order to
achieve the following tasks:
(i)Accept deposit from a customer and update the balance.
(ii)Display the balance.
(iii)Compute and deposit interest.
(iv)Permit withdrawal and update the balance.
(v)Check for the minimum balance and update the balance.

Do not  use any constructors. Use member functions to initialize the class
members*/

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class account{
    protected:
        int account_number;
        char customer_name[25];
        char account_type[25];
        char check_book[25];
        float balance;
    public:
        void bsetdata();
};

void account::bsetdata(){
    cout<<"\n\nEnter bank details : ";
    cout<<"\nEnter bank account number : ";
    cin>>account_number;
    cout<<"Enter Name : ";
    cin>>customer_name;
    cout<<"Account Type :";
    cin>>account_type;
    cout<<"Enter the balance : ";
    cin>>balance;
}


class savings:public account{
    protected:
        float compound_interest;
    public:
        void setdata();
        void displaybalance();
        void deposit(int);
        void withdraw(int);
        void calc_interest(int);
};

void savings::setdata(){
    strcpy(check_book,"Not available");
    cout<<"\nEnter details for savings account :";
    bsetdata();
    cout<<"Enter the interest percentage : ";
    cin>>compound_interest;
}

void savings::displaybalance(){
    cout<<"\nBalance for the savings account is :"<<balance;
}
void savings::deposit(int x){
    balance +=x;
    cout<<x<<" amount deposited successfully";
}

void savings::withdraw(int x){
    if(balance < x){
        cout<<"\nNot enough Balance";
    }
    else{
        balance-=x;
        cout<<"\n"<<x<<" amount successfully withdrawn";
    }
}

void savings::calc_interest(int n){
    cout<<"\nCalculating interest\n";
    float b, i;
    b = balance*(pow(((compound_interest/100)+1),n));
    i=b-balance;
    cout<<i<<" interest amount successfully deposited";
    balance =b;
}

class current:public account{
    protected:
        int service_charge;
        int minimum;
    public:
    void setdata();
    void display();
    void deposit(int);
    void withdraw(int);
    void calc_servicecharge();
};

void current::setdata(){
    strcpy(check_book,"Available");
    cout<<"\n\nEnter details for current account :";
    bsetdata();
    cout<<"\nEnter the service charge amount and minimum balance to be maintained : ";
    cin>>service_charge>>minimum;
}

void current::display(){
    cout<<"\nThe balance amount of current account is : "<<balance;
}
void current::deposit(int x){
    balance +=x;
    cout<<x<<" amount deposited successfully";
}

void current::withdraw(int x){
    if (balance < x){
        cout<<"\nNot enough amount.";
    }
    else{
        balance -=x;
        cout<<"\n"<<x<<" amount successfully withdrawn";
    }
}

void current::calc_servicecharge(){
    if(balance<minimum){
        balance -=service_charge;
        cout<<"\nservice charge levied as balance is less than minimum.";
    }
    else{
        cout<<"\nservice charge not levied\n";
    }
}

int main(){
    savings s1;
    current c1;
    s1.savings::setdata();
    s1.savings::deposit(10000);
    s1.savings::withdraw(9000);
    s1.calc_interest(1);
    s1.displaybalance();
    c1.current::setdata();
    c1.current::deposit(150000);
    c1.current::withdraw(5000);
    c1.calc_servicecharge();
    c1.current::display();
}
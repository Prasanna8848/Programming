#include<iostream>
#include<string.h>
using namespace std;

class BankAccount{
    private:
        char name[50];
        char accounttype[20];
        int accountNumber;
        float balance; 
    public:
    BankAccount(char *n,char *a,int num,float b){
        strcpy(name,n);
        strcpy(accounttype,a);
        accountNumber = num;
        balance = b;
    }
    void deposit(float);
    void withdraw(float);
    void display();
};

void BankAccount::deposit(float cash){
    balance +=cash;
    cout<<"\n\n"<<cash<<" amount successfully deposited in account number "<<accountNumber;
    cout<<"\nNew Balance : "<<balance;
}
void BankAccount::withdraw(float cash){
    if(balance<cash){
        cout<<"\n\nBalance insufficient to withdraw the amount from A/No. "<<accountNumber;
    }
    else{
        cout<<"\n\nBalance withdraw successful from A/No. "<<accountNumber;
        balance -=cash;
    }
}

void BankAccount::display(){
    cout<<"\n\nAccount details : ";
    cout<<"\nName : "<<name;
    cout<<"\nAccount number : "<<accountNumber;
    cout<<"\nAccount type : "<<accounttype;
    cout<<"\nBalance amount : "<<balance;
}

int main(){
    BankAccount user1("Ram","Savings",100000001,5000);
    BankAccount user2("shyam","current",100000002,10000);
    BankAccount user3("Sita","Savings",100000003,23000);
    user1.deposit(2000);
    user2.display();
    user3.withdraw(5000);
    user1.withdraw(15000);
    user3.display();
    user3.deposit(15000);
    return 0;
}
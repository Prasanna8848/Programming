#include<iostream>
#include<string.h>
using namespace std;

class book{
    protected:
        char name[25];
        char author[25];
        float price;
        int available;
    public:
        friend int search(int ,class book [], char []);
        void setdata();
        void getdata();
        friend void increament(int ,class book []);
        friend void pricechange(int ,class book []);
        void decreament(int ,class book []);
};

void book::setdata(){
    cin>>name;
    cin>>author;
    cin>>price;
    cin>>available;
}

void book::getdata(){
    cout<<"\n\nDetails of the book";
    cout<<"\nName : "<<name;
    cout<<"\nAuthor : "<<author;
    cout<<"\nPrice : "<<price;
    cout<<"\nNo. of copies available : "<<available;
}

void pricechange(int n,class book b[]){
    char bn[25];
    int bol;
    float p;
    cout<<"\nEnter the name of the book to change its price : ";
    cin>>bn;
    bol=search(n,b,bn);
    if(bol==-1){
        cout<<"\nBook not found!"<<endl;
    }
    else{
        cout<<"\nBook found\nPrice is : "<<b[bol].price<<"\nEnter the new price : ";
        cin>>p;
        b[bol].price = p;
        cout<<"Price of the book changed to "<<b[bol].price;
    }
}

void increament(int n,class book b[]){
    char bn[25];
    int bol, p;
    cout<<"\nEnter the name of the book to increase the book stock : ";
    cin>>bn;
    bol=search(n,b,bn);
    if(bol==-1){
        cout<<"\nBook not found!"<<endl;
    }
    else{
        cout<<"\nBook found\nAvailable copies is : "<<b[bol].available<<"\nEnter the new number of books to be added : ";
        cin>>p;
        b[bol].available += p;
        cout<<"\nAvailable of the book changed to "<<b[bol].available;
    }
}

void book::decreament(int n,class book b[]){
    int d;
    float totalprice;
    cout<<"\nEnter the number of books to be bought : ";
    cin>>d;
    if(d<=available){
        cout<<"\nTotal cost of Books : "<<d*price;
        available -=d;
    }
    else{
        cout<<"\nNot enough copies left!!";
    }
}

int search(int n,class book b[], char name[]){
    int i=0;
    while(strcmp(b[i].name,name) &&(i<n)){
        i++;
    }
    if(i==n){
        return -1;
    }
    else{
        return i;
    }
}


int main(){
    int n, i,choice;
    char name[25];
    cout<<"Enter the number of books to be stored : ";
    cin>>n;
    book b[n];
    cout<<"\n\nEnter the details for the book :";
    cout<<"\nBook Name\tAuthor\tPrice\tAvailable copies\n";
    for(i=0;i<n;i++){
        b[i].setdata();
    }
    cout<<"\nPress 1 to buy books";
    cout<<"\nPress 2 to display details of the book";
    cout<<"\npress 3 to increment the available copies of the book";
    cout<<"\nPress 4 to change the price of the book:";
    cout<<"\nPress 0 to exit the program";
    while (choice !=0){
        cout<<"\nYour choice :";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter the name of the book :";
            cin>>name;
            i = search(n,b,name);
            if(i==-1){
                cout<<"No Book found!";
            }
            else{
                b[i].decreament(n,b);
            }
            break;
        case 2:
            cout<<"Enter the name of the book :";
            cin>>name;
            i = search(n,b,name);
            if(i==-1){
                cout<<"No Book found!";
            }
            else{
                b[i].getdata();
            }
            break;
        case 3:
            increament(n,b);
            break;
        case 4:
            pricechange(n,b);
            break;
        case 0:
            break;
        default:
        cout<<"\nOption incorrect!";
            break;
        }
    }
    return 0;
}
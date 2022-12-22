#include<iostream>
using namespace std;

class book{
    private:
    string name;
    string author;
    float price;
    public:
    friend void percentage(float, float, book);
    void setdata();
    void getdata();
};
void book::setdata(){
    cout<<"\nEnter the book name : ";
    cin>>name;
    cout<<"Enter the author name : ";
    cin>>author;
    cout<<"Enter the price :";
    cin>>price;
}

void book::getdata(){
    cout<<"\nBook name : "<<name;
    cout<<"\nAuthor name : "<<author;
    cout<<"\nPrice : "<<price;
}

void percentage(float upper , float lower , book b1){
    if(b1.price>lower && b1.price <upper){
        cout<<"\nData found :";
        b1.getdata();
    }
}

int main(void){
    int n , i;
    float up , low;
    cout<<"\nEnter the number of books to store : ";
    cin>>n;
    book b[n];
    for(i =0; i<n ;i++){
        cout<<"Enter data for book "<<(i+1);
        b[i].setdata();
    } 

    cout<<"\nEnter upper and lower range of the price of books :";
    cin>>up>>low;
    for(i =0; i<n ;i++){
        percentage(up, low , b[i]);
    } 
    return 0;
}
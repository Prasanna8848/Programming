#include<iostream>
using namespace std;

class integer{
    private:
    int i;
    public:
    integer(){
        i =0;
    }
    static int countset;
    static int countget;
    void getdata();
    void setdata();
};

int integer::countset=0;
int integer::countget=0;

void integer::getdata(){
    countget++;
    cout<<"\n Data is :"<<i<<endl;
}

void integer::setdata(){
    cout<<"\nEnter the data : ";
    cin>>i;
    countset++;
}

int main(void){
    int a=100;
    integer i;
    cout<<"Enter 1 to store the data:\n";
    cout<<"Enter 2 to display the data:\n";
    cout<<"Enter 0 to end the program:\n";
    
    while (a!=0){
        cout<<"Enter your choice : ";
        cin>>a;
        switch (a)
        {
        case 0:
            break;
        case 1:
            i.setdata();
            break;
        case 2:
            i.getdata();
            break;
        default:
            cout<<"Invalid input!!!!!! reenter the choice\n";
            break;
        }
    }
    cout<<"\nNumber of times input function is called in the program = "<<i.countset;
    cout<<"\nNumber of times output function is called in the program = "<<i.countget;
    return 0;
}
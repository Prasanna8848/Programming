#include<iostream>
using namespace std;

class dis{
    public:
    void display(char ='*' ,int =80);
};

int main(){
    dis d1;
    cout<<"\n\nWhen character and number both are given\n";
    d1.display( 'n', 20);
    cout<<"\n\nWhen character is only given\n";
    d1.display('n');
    cout<<"\n\nWhen character and number both are not given\n";
    d1.display();
}

void dis::display(char a  ,int n){
    int i;
    for(i=1 ;i<=n ; i++){
        cout<<" "<<a;
    }
}
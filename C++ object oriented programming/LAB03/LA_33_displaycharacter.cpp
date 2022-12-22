#include<iostream>
using namespace std;

class dis{
    private:
    char name;
    int n;
    public:
    dis(char d, int i){
        name=d;
        n=i;
    }
    dis(char d){
        name=d;
        n=80;
    }
    dis(){
        name='*';
        n=80;
    }
    void display(char ,int);
    void display(char);
    void display();
};

int main(){
    dis d1( 'n', 20);
    dis d2('n');
    dis d3;
    d1.display('\n',0);
    d2.display('\n');
    d3.display();
}

void dis::display(char a ,int b){
    int i;
    cout<<"\n\nWhen character and number is given\n";
    for(i=1 ;i<=n ; i++){
        cout<<" "<<name;
    }
}

void dis::display(char a ){
    int i;
    cout<<"\n\nWhen character is only given\n";
    for(i=1 ;i<=n ; i++){
        cout<<" "<<name;
    }
}

void dis::display( ){
    int i;
    cout<<"\n\nWhen character and number both are not given\n";
    for(i=1 ;i<=n ; i++){
        cout<<" "<<name;
    }
}
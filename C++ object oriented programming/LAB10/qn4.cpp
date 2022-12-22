//insertion and extraction operator

#include<iostream>
#include<string.h>
using namespace std;

class sports{
    char name[25];
    int strength;
    public:
    sports(){
        strcpy(name,"");
        strength=0;
    }
    friend ostream& operator<<(ostream&, sports&);
    friend istream& operator>>(istream&,sports&);
};

ostream& operator<<(ostream& output, sports& s){
    cout<<"\nName = "<<s.name;
    cout<<"\nStrength = "<<s.strength;
    return output;
}

istream& operator>>(istream& input, sports& s){
    cout<<"\nName = ";
    cin>>s.name;
    cout<<"\nStrength = ";
    cin>>s.strength;
    return input;
}

int main(){
    sports s1;
    cin>>s1;
    cout<<s1;
    return 0;
}
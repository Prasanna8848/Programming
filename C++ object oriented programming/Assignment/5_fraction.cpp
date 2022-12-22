#include<iostream>
using namespace std;

int lcm(int , int);

class fraction{
    private:
        int numerator;
        int denominator;
    public:
        void setdata();
        friend void add(fraction ,fraction );
        friend void subtract(fraction &,fraction &);
};

void fraction::setdata(){
    cout<<"Enter Numerator and Denominator :";
    cin>>numerator>>denominator;
}

void add(fraction a1,fraction a2){
    int num=0, denomin, i;
    denomin = lcm(a1.denominator, a2.denominator);
    num += (a1.numerator*(denomin / a1.denominator));
    num += (a2.numerator*(denomin / a2.denominator));
    for(i=2;i<=num;i++){
        if(denomin%i==0 && num%i==0){
            denomin /=i;
            num /=i;
            i--;
        }
    }
    cout<<"\nThe numerator and denominator after addition between two numbers are : "<<num<<" / "<<denomin;
} 

void subtract(fraction &a1,fraction &a2){
    int num=0, denomin, i;
    denomin = lcm(a1.denominator, a2.denominator);
    num += (a1.numerator*(denomin / a1.denominator));
    num -= (a2.numerator*(denomin / a2.denominator));
    for(i=2;i<=num;i++){
        if(denomin%i==0 && num%i==0){
            denomin /=i;
            num /=i;
            i--;
        }
    }
    cout<<"\nThe numerator and denominator after subtraction between two numbers are : "<<num<<" / "<<denomin;
}


int main(){
    fraction f1 ,f2;
    f1.setdata();
    f2.setdata();
    add(f1,f2);
    subtract(f1,f2);
}

int lcm(int a, int b){
    int i , hcf , h;
    h = a > b ? b : a;
    for(i=1;i<=h;i++){
        if(a % i == 0 && b % i == 0){
            hcf=i;
        }    
    }
    return ((a*b)/hcf);
}
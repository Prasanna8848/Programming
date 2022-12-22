#include<iostream>

using namespace std;

class swap2;
class swap1{
    private:
    int i;
    public:
    friend void swap(swap1 &,swap2 &);
    void setdata();
};
void swap1::setdata(){
    cout<<"Enter an integer for class 1 :";
    cin>>i;
}

class swap2{
    private:
    int j;
    public:
    friend void swap(swap1 &,swap2 &);
    void setdata2();
};

void swap2::setdata2(){
    cout<<"Enter an integer for class 2 :";
    cin>>j;
}

void swap(swap1 &s1, swap2 &s2){
    int temp;
    cout<<"Data before swapping\nClass1 :"<<s1.i<<"\nClass 2 :"<<s2.j;
    temp = s1.i;
    s1.i = s2.j;
    s2.j = temp;
    cout<<"\n\nData after swapping\nClass1 :"<<s1.i<<"\nClass 2 :"<<s2.j;
}

int main(void){
    swap1 s1;
    swap2 s2;
    s1.setdata();
    s2.setdata2();
    swap(s1 ,s2);
    return 0;
}
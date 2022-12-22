#include<iostream>
using namespace std;

class swap1{
    private:
    int i;
    public:
    swap1(int in){
        i=in;
    }
    int getdata();
    void setdata(int);
};
int swap1::getdata(){
    return i;
}
void swap1::setdata(int a){
    i=a;
}

class swap2{
    private:
    int j;
    public:
    swap2(int jn){
        j = jn;
    }
    int getdata2();
    void setdata2(int);
};

int swap2::getdata2(){
    return j;
}

void swap2::setdata2(int a){
    j=a;
}

int main(void){
    swap1 s1(55);
    swap2 s2(77);
    int temp;
    cout<<"Data before swapping\n Class1 :"<<s1.getdata()<<"\nClass 2 :"<<s2.getdata2();
    temp = s1.getdata();
    s1.setdata(s2.getdata2());
    s2.setdata2(temp);
    cout<<"\n\nData after swapping\n Class1 :"<<s1.getdata()<<"\nClass 2 :"<<s2.getdata2();
    return 0;
}
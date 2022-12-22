#include<iostream>
using namespace std;

class array{
    private:
        int size;
        int *p;
    public:
        array(int s){
            size = s;
            p = new int[size];
        }
        array(){
            cout<<"\nObject without size created \n";
        }
        void join(array, array);
        void setdata();
        void getdata();
        ~array(){
            delete p;
            cout<<"\nDestructor Invoked\n";            
        }
};

void array::setdata(){
    cout<<"Enter the "<<size<<" data values : ";
    for(int i = 0; i<size ;i++){
        cin>>p[i];
    }
}

void array::getdata(){
    cout<<"Data values are: ";
    for(int i = 0;i< size;i++){
        cout<<p[i]<<" ";
    }
    cout<<"\n";
}

void array::join(array a1, array a2){
    int i, j=0;
    size = a1.size+a2.size;
    p = new int[size];
    for(i= 0; i < a1.size;i++){
        p[j++]=a1.p[i];
    }
    for(i= 0; i < a2.size;i++){
        p[j++]=a2.p[i];
    }
    cout<<"\nMerge successful!!!!\n";
}

int main(){
    array a1(5);
    a1.setdata();
    array a2(7);
    a2.setdata();
    array a3;
    a3.join(a1,a2);
    a3.getdata();
    return 0;
}
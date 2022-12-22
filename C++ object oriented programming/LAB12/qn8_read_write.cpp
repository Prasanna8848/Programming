//7) WAP to read and write a file in a object

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class point{
    int x ,y;
    public:
    void display(){
        point p1;
        int n=1;
        fstream f1("Point.dat",ios::in);
        while((f1.read((char*)&p1,sizeof(point)))){
                cout<<"\nPoint No:"<<n;
                cout<<"\nX = "<<p1.x<<"\nY = "<<p1.y;
                n++;
            }
        f1.close();
        }
    void Addrecord(){
        point p1;
        fstream f1("Point.dat",ios::app);
        p1.getdata();
        f1.write((char*)&p1,sizeof(point));
        f1.close();
    }
    void getdata(){
        cout<<"Enter the x and Y coordinates to store in the program";
        cin>>x>>y;
    }   
    };


int main(){
    point p;
    int n;
    cout<<"\nEnter the number of values to be stored in the record:";
    cin>>n;
    for(int i =0;i<n;i++){
        p.Addrecord();
    }
    p.display();
    return 0;
}
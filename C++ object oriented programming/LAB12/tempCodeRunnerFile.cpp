
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
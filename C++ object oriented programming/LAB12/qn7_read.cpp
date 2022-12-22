//6) Example of read() function

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Student
{
   int roll;
   char name[20];
   float marks;

   void putdata()
   {
      cout<<"\n\t"<<roll<<"\t"<<name<<"\t"<<marks;
   }

  public:

   void Display()
   {
     fstream f;
     Student Stu;
     f.open("Student.dat",ios::in);
     cout<<"\n\tRoll\tName\tMarks\n";
     while(f.read((char*)&Stu,sizeof(Stu))){
      Stu.putdata();
     }
     f.close();
   }
};

int main()
{
  Student S;
  S.Display();
  return 0;
}
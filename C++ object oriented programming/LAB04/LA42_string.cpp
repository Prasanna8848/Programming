#include<iostream>
#include<cstring>

using namespace std;

class str{
    private:
        char s[100];
        int slen;
    public:
        str(){
            strcpy(s,"\0");
        }
        str(char st[100]){
            strcpy(s,st);
        }
        friend void join(str,str);
        void setlength();
        void display();
};

void join(str s1,str s2){
    char a[s1.slen+s2.slen+1];
    strcpy(a,s1.s);
    strcat(a,s2.s);
    cout<<"\nThe connected string is "<<a;
}

void str::setlength(){
    slen = strlen(s);
}

void str::display(){
    cout<<"\nString :"<<s;
    cout<<"\nString length :"<<slen;
}

int main(){
    char e[100],w[25]="work";
    cout<<"Enter any string:";
    cin>>e;
    str s1;
    str s2(e);
    str s3(w);
    s1.setlength();
    s2.setlength();
    s3.setlength();
    s1.display();
    s2.display();
    s3.display();
    join(s3 ,s2);
    return 0;
}
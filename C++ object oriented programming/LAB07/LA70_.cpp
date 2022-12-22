#include<iostream>
using namespace std;

class PLAYER{
    protected:
        char name[15];
        char gender;
        int age;
};

class physique:public PLAYER{
    protected:
    float height;
    float weight;
};

class LOCATION{
    protected:
        char city[20];
        char pin[7];
};

class GAME{};
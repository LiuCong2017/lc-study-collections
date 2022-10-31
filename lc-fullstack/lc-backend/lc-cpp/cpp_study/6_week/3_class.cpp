//
// Created by Administrator on 2022/3/11.
//
#include <iostream>
using namespace std;

class Date{
//public:
    /** C++不加访问控制默认为private */
    int year;
    int month;
    int day;

public:
    int GetYear(){return this->year;}
    int SetYear(int year){this->year = year;}

    void PrintDataMsg();
};

void Date::PrintDataMsg()
{
    cout<<"Year="<<this->year;
}

int main()
{
    Date a;
//    a.year = 2022;
    a.SetYear(1000);

    int year = a.GetYear();
}
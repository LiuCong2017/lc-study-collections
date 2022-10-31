//
// Created by Administrator on 2022/3/20.
//
/**
 * 构造函数 - 在声明对象的时候自动执行
 * 函数名称 - 类名
 * 没有函数类型
 * 如果没有为类声明构造函数，则系统自动产生一个默认的构造函数，
 * 如果声明了构造函数，则必须使用声明的构造函数来初始化类。
 */

/**
 * 析构函数 - 在对象销毁的时候自动执行
 * 函数名称 - ~类名
 * 没有函数类型
 * 不能带参数
 */

/**
 * "先声明"的对象先被"构造"
 * "后声明"的对象先被"析构"
 */

#include <iostream>
#include <string.h>
using namespace std;

class Date
{
protected:
    int _year;
    int _month;
    int _day;
public:
    char *msg;

public:
    //默认构造函数
    Date(){
        msg = new char[100];
    };
    Date(int year,int month,int day); //赋值构造函数
    //拷贝构造函数
    Date(Date &date){
        _year = date._year;
    };
//    Date(Date *date)
//    {
//        _year = date->_year;
//    }

    //析构函数
    ~Date(){
        delete msg;
        cout<<"析构函数调用"<<endl;
        cout<<GetYear()<<endl;
    };

    int GetYear(){return _year;}; //内联函数
    void SetYear(int year){_year=year;};

//    int GetTotalDayofThisMonth();
//    int GetTotalDay();

};

//int Date::GetTotalDayofThisMonth() { return 0; };
//inline int Date::GetTotalDay() { return 0; };

int main()
{
    Date a;
    Date b(2021,2,5);
    Date c(b);
//    Date d(&b);

    strcpy(a.msg,"hello");

    return 0;
}
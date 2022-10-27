//
// Created by Administrator on 2022/3/20.
//
/**
 * 写一个学生类，学生有姓名，性别，成绩三个属性
 * 要求写出默认构造函数，赋值构造函数和拷贝构造函数，
 * 析构函数
 */

#include <iostream>
#include <string.h>

using namespace std;

class Student{
public:
    char *_name;
    char _gender;
    double _grade;

public:
    Student();
    Student(char *name,char gender,double grade);
    Student(Student &student);
    ~Student();
};

Student::Student() {
    _name = new char[20];
    strcpy(_name,"lisa");

    _gender = 'M';
    _grade = 90;
}

Student::Student(char *name,char gender,double grade) {
    int len = strlen(name);
    _name = new char [len +1];
    strcpy(_name,name);
}

Student::Student(Student &student)
{
    _gender = student._gender;
}

Student::~Student()
{
    delete _name;
}

int main()
{
    Student a;
    Student b("lisa",'F',100);
    Student c(a);

    Student *p = new Student("cody",'M',90);
    delete p;

    p = new Student(b);
    p->_grade=100;
    delete p;

}
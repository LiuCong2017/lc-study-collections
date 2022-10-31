//
// Created by Administrator on 2022/3/10.
//
#include <string.h>
#include <stdio.h>

struct Student
{
    char name[20];
    char gender;
    double score;
};

int AddStudentScore(Student &c, double value)
{
    c.score +=  value;
    return 1;
}

void PrintStudentInfo(const Student &c)
{
    printf("%s\n",c.name);
}

int main()
{
    Student a;
    strcpy(a.name,"Eva");
    a.gender = 'M';
    a.score = 100;

    AddStudentScore(a,100);

    Student b[10];
    b[0].score = 50;

    Student *p = &a;
    a.score = 50;
    p->score = 100; //指针方式访问结构体

    p = b; //指向结构体数组，p指向b[0]
    p->gender = 'M';

    p++; //p指向b[1].03665
    p->gender = 'F';

}
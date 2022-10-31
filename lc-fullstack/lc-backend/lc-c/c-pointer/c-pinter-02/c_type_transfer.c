/**
 * 将数组a强制转换为一个结构体类型stu
 */
#include <stdio.h>

typedef struct STUDENT
{
    int name;
    int gender;
}stu;

int a[100]={10,20,30,40,50};

int main(int argc, char **argv)
{
    stu *student;
    student=(stu*)a;
    /**
     * "->"为指针的成员运算符,可以用来访问结构体中的成员
     */
    printf("student->name=%d\n",student->name);
    printf("student->gender=%d\n",student->gender);
    return 0;
}


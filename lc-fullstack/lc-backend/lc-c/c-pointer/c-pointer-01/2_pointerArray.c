//
// Created by Administrator on 2022/3/4.
//
#include "stdio.h"

int main()
{
//    int a[10];
//    int *p = a; //p是指向数组a的指针
//    int *pa[10]; //pa是指针数组，定义了10个指针
//
//    pa[0] = &a[0];
//    pa[1] = &a[1];

    int a[10][5]; //定义一个10行5列的二维数组

    int *p = (int *)a; //（int *）表示将后面的变量强制转换为INT指针类型数据，同理，(long *)就是长整型指针
    int *pa[10];

    printf("%p\n",p);
    printf("%p",&a);


    return 0;
}


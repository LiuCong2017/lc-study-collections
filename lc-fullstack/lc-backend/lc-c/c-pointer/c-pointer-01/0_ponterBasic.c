//
// Created by Administrator on 2022/3/5.
//
/**
 * 1. p - 指针变量p存储(指向)的内存地址
 * 2. *p -  【一级指针】指针变量p存储(指向)的内存地址的内容,即使用指针访问值
 * 3. &p - 指针变量自身的内存地址
 * 4. **p - 【二级指针】指针变量p存储(指向)的内存地址，存储着另一个一级指针
 */
#include "stdio.h"

int main()
{
    int *q=NULL;
    int a = 19, b = 20;
    int *p = &a; //指向a
    *p = 100;

    p = &b; //改变指向至b (把b的地址存储到指针变量p)
    *p = 200;

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    q = &b;
    int** p2 = &q; ////定义了一个二级指针指向q指针
    printf("Value of **p2 variable: %d\n", **p2);

    /**指向常量的指针*/
    ////指向const的指针,即指向 const 数据的指针
    ////指向 const 的指针指向一个常量项目。指针指向的数据不能改变，但指针本身可以改变。
    const int *poc = &a; //指向const int的指针
//    *poc = 9; //不可修改po指向的内容
    poc = &b; //可修改指向

    /**常指针*/
    ////const 指针
    ////对于 const 指针来说，指针本身就是常量。一旦指针使用了某个地址进行初始化，那么它就不能指向除此地址之外的任何其他东西
    int *const cop = &a; //*const表示op是一个指针常量
    *cop = 9; //可修改所存储地址的内容
//    cop = &b; //不可修改指向(存储的地址)

    /**指向常量的常指针*/
    ////指向常量的指针常量
    const int *const opc = &a; //opc是一个指向 const int 的 const 指针
//    *opc = 9; //不可修改所存储地址的内容
//    opc = &b; //不可修改指向(存储的地址)

    return 0;
}
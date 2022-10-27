//
// Created by Administrator on 2022/3/6.
//

#include "string.h"

int main()
{
    int *p = new int[10]; //动态创建一个数组,大小为10
    int *r = new int(10); //动态创建一个变量，值为10

    delete [] p; //delete动态删除数组
    delete r; //delete动态删除变量

}
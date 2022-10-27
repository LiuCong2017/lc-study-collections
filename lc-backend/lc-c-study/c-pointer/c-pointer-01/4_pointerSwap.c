//
// Created by Administrator on 2022/3/5.
//
#include "stdio.h"

void swap(int *x, int *y)
{
    int *temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a=%d\tb=%d\n",a,b);

    return 0;
}

//
// Created by Administrator on 2022/3/5.
//
/**
 * 该程序有bug,请参见用c语言实现冒泡排序
 */
#include "stdio.h"

void sort(int *p, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n-1; j++) {
//            if(*(p + j) > *(p + j +1))
//            {
//                int temp = *(p + j);
//                *(p + j) = *(p + j +1);
//                *(p + j +1) = temp;
//            }
            if(p[j]> p[j+1])
            {
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

int main()
{
    int x[] = {23,34,1,45,334,53,232,1,5,6,34,45};
    int size = sizeof(x)/sizeof(x[0]);
//    printf("%d\n",size);
    sort(x,size);
    for (int i = 0; i < size; i++) {
        printf("%d\t",x[i]);
    }

    return 0;
}
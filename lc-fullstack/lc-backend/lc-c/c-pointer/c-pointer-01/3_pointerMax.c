//
// Created by Administrator on 2022/3/5.
//
#include "stdio.h"

int GetArrayMax(int *p, int n)
{
    int max = *p;
    /**方式一*/
    for (int i=0;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max = *(p+i);
        }
    }

    /** 方式二 */
//    int *q = p;
//    for (p = p+1;  p<q+n; p++) {
//        if(*p > max)
//        {
//            max = *p;
//        }
//    }

    return max;
}

void main(){
    int x[] = {23,34,1,45,334,53,232,1,5,6,34,45};
    int max = GetArrayMax(x,12);
    printf("Max = %d\n",max);
}
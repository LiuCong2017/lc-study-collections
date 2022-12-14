/**
 * 二维数组的声明：类型 数组名[这个二维数组中有多少个一维数组][每一个一维数组的大小]
 * 例如： int arr[x][y]
 * 二维数组名是一个指向整个二维数组首地址的指针，如上是一个int类型数组指针: int(*arr)[x]
 */
#include "stdio.h"

int main()
{
    /**
     * 包含3个一维数组c[0]、c[1]、c[2]，每个一维数组包含4个元素
     * c，c[0]的值都是整个二维数组的首地址
     * *c[0] = **c = c[0][0]
     * c+1 指向第二个一维数组
     * c[0]+1 递增4个内存单元，指向第一个一维数组的第二个元素
     */
    int c[3][4];

    return 0;
}
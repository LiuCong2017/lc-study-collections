#include "stdio.h"

int main()
{
    /**
     * 值得注意的是下面的内存地址(该处是6422216)不能随便指定，必须是计算机已经分配的内存，
     * 否则计算机会认为指针越界而被操作系统杀死即程序提前终止
     */
    unsigned int *p=(unsigned int*)(6422216);
    *p = 125;
    *(unsigned int*)(6422216)=125;
    printf("&p=%d\n",&p);
    printf("p=%d\n",p);
    return 0;
}
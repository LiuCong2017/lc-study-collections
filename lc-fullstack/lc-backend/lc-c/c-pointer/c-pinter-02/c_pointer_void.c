/**
 * void指针仅仅是一个没有指定类型的指针，
 * 即该指针只有地址数据属性，
 * 不具备解引时的空间大小属性。
 * （由于void指针没有空间大小属性，因此void指针也没有++操作）
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 10;
    void *p;
    p=&a;
    //printf("p=%d\n",*p); //由于编译器在解引时无法确定*p的大小，编译会报错
    printf("p=%d\n",*(int*)p); //强制类型转换即可告诉编译器p的类型或者*p的大小
    return 0;
}


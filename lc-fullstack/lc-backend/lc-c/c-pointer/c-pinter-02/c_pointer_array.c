/**
 * 访问数组的另一种方式: 通过指针访问数组元素
 */
#include "stdio.h"

int main(){
    int b[5]={10,11,12,13,14};
    int *p = &b;
    int c1 = b[1];
     int c2 = *(p+1);
     int c3 = *(&b[0]+1);
     int c4 = *(b+1);
//    int c2 = *(p)+1;
    printf("c1=%d,,c2=%d,c3=%d\n",c1,c2,c3);
    return 0;
}
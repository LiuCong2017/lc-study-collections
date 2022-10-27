#include <stdio.h>

int main() {
    int a[10] = {1,2,3};
    int *p = a;

    /** 第一种 */
    for(int i=0;i<10;i++){
//        *p = i;
//        p++;
        //or
        *p++ = i;
        printf("%d\n",a[i]);
        printf("%p\n",p);
    }
    /** 第二种 */
//    for(p=a;p<a+10;p++){
//        *p = p-a;
//        printf("%d\n",*p);
//    }

    return 0;
}

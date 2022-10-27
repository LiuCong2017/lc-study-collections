//
// Created by Administrator on 2022/3/10.
//
int main()
{
    int a = 10;
    int b = 20;

    const int *p = &a; //指向常量的指针
//    *p = 100;
    p = &b;

    int *const q = &a; //常指针
    *q = 100;
//    q = &b;

    const int *const r = &a; //指向常量的常指针
//    *r = 100;
//    r = &b;
    int const *const r1 = &a;
//    *r1 = 100;
//    r1 = &b;

}


/**
 * 上面的代码中TaskA_CallBack是回调函数，
 * 该函数的形参为一个函数指针，而FFT_Function是一个被调用函数。
 * 可以看到回调函数中申明的函数指针必须和被调用函数的类型完全相同。
 */
#include "stdio.h"

int InputData[100]={0};
int OutputData[100]={0};

void FFT_Function(int *inputData,int *outputData,int num)
{
    while (num--)
    {

    }
}

void TaskA_CallBack(void (*fft)(int*,int*,int))
{
    (*fft)(InputData,OutputData,100);
}

int main(int argc,char **argv)
{
    TaskA_CallBack(FFT_Function);
    return 0;
}
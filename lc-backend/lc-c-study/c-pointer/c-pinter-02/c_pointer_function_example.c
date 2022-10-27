/**
 * 下面的例子将一个tft_display封装成一个对象，下面的结构体成员中最后一个没有初始化，
 * 这在Linux中用的非常多，最常见的是file_operations结构体，
 * 该结构体一般来说只需要初始化常见的函数，不需要全部初始化。
 * 下面代码中采用的结构体初始化方式也是在Linux中最常用的一种方式，
 * 这种方式的好处在于无需按照结构体的顺序一对一。
 */
#include "stdio.h"

typedef struct TFT_DISPLAY
{
    int pix_width;
    int pix_height;
    int color_width;
    void (*init)(void);
    void (*fill_screen)(int color);
    void (*tft_test)(void);
}tft_display;

static void init(void)
{
    printf("the display is initialed\n");
}

static void fill_screen(int color)
{
    printf("the display screen set 0x%x\n",color);
}

tft_display mydisplay =
        {
            .pix_width=320,
            .pix_height=240,
            .color_width=24,
            .init=init,
            .fill_screen=fill_screen,
        };

int main(int argc,char **argv)
{
    mydisplay.init();
    mydisplay.fill_screen(0xfff);
    return 0;
}
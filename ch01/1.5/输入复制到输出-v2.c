#include <stdio.h>

/* 将输入复制到输出；版本2 */
main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}

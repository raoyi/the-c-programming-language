#include <stdio.h>

/* �����븴�Ƶ�������汾1 */
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

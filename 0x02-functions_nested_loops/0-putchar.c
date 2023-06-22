#include <stdio.h>
#include "main.h"

void int_putchar(char c);

int main(void)
{
    char str[] = "_putchar";
    int ch;

    for (ch = 0; ch <= 8; ch++)
    {
        int_putchar(str[ch]);
    }

    int_putchar('\n');

    return 0;
}

void int_putchar(char c)
{
    putchar(c);
}

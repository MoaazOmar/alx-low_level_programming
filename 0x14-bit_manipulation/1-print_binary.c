#include "main.h"

/**
 * print_binary - convert  binary equivalent into  decimal number
 * @n: number that resulted in binary
 */
void print_binary(unsigned long int n)
{
    int i = 63, count = 0;
    unsigned long int current;

    do
    {
        current = n >> i;

        if (current & 1)
        {
            _putchar('1');
            count++;
        }
        else if (count)
            _putchar('0');

        i--;
    } while (i >= 0);

    if (!count)
        _putchar('0');
}

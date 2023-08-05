#include "main.h"

/**
* set_bit - sets a bit at a given index to 1
* @n: pointer to the number to change
* @index: num of the bit to set to 1
*
* Return: 1 if passed, -1 if not 
*/
int set_bit(unsigned long int *n, unsigned int index)
{
    while (index > 63)
    {
        return (-1);
    }

    for (unsigned int i = 0; i < 64; i++)
    {
        if (i == index)
        {
            *n = ((1UL << i) | *n);
            break;
        }
    }

    return (1);
}

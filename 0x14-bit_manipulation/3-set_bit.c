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
    if (index > 63)
    {
        return (-1);
    }
    else
    {
        if (index < 64)
        {
            *n = ((1UL << index) | *n);
        }

        return (1);
    }
}

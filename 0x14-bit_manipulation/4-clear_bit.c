#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @n: pointer that indicate number to change
* @index: index of the bit to clear
*
* Return: 1 if yes , -1 if faied
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
    {
        return (-1);
    }
    else
    {
        *n = (~(1UL << index) & *n);
        return (1);
    }
}

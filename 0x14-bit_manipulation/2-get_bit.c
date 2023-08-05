#include "main.h"

/**
* get_bit - returns the value of a bit in from of a decimal number
* @n: number to look for
* @index: index of the bit
*
* Return: Resulted value in bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}


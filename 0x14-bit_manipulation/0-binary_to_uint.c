#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decVal = 0;

	if (!b)
		return (0);

	int i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decVal = (decVal << 1) | (b[i] - '0');
		i++;
	}

	return (decVal);
}

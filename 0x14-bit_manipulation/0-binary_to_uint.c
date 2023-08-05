#include "main.h"

/**
 * binary_to_uint - change a binary number to unsigned int
 * @b: string that has the binary number
 *
 * Return: Result  number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
		i++;
	}

	return (dec_val);
}

#include "main.h"

/**
*get_endianness`Description: This function checks whether a machine is big or small.
*
*Return: It returns 0 if the machine is big , and 1 if is small.
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}


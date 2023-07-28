#include <stdio.h>

void __attribute__ ((constructor)) first(void);

/**
* first - Prints a sentence before the main function is executed.
*/
void first(void)
{
printf("The journey of a thousand miles begins with a single step.\n");
}

#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: we use a pointer to show the name.
* @text_content: In the end of text we are using string to name.
*
* Return: If the function fail- -1.
*         if the function doesn't exist- -1.
*         Otherwise - 1.
*/
nt append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	{
		return -1;
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	{
		return -1;
	}

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return -1;
	}

	close(o);
	return 1;
}

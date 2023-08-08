#include "main.h"

/**
* create_file - Creates a file.
*@filename: To point the file name that you want to create.
*@text_content: A pointer that to write to file.
*
* Return: In case function didn't work - -1.
*         if worked its value - 1.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

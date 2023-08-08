/**
* read_textfile- Read text file then  print it.
* @filename:file text that we will read and print
* @letters: letters number that presents
* Return: w- actual number of bytes read and printed       
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, t;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}


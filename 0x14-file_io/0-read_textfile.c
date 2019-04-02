#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file passed
 * @letters: the number of letters the function should read and print
 * Return: 0 if filename is NULL or cannot be opened or read
 * if successful returns number of letters that can be read and printed
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	int func;
	int read_letters;
	char buffer[1024];

	if (!filename || !letters)
		return (0);

	func = open(filename, O_RDONLY);

	if (func == -1)
	{
		return (0);
	}

	read_letters = read(func, buffer, letters);

	if (read_letters == -1)
	{
		close(func);
		return (0);
	}

	for (i = 0; i < read_letters; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) == -1)
		{
			close(func);
			return (0);
		}

	}
	close(func);
	return (read_letters);
}

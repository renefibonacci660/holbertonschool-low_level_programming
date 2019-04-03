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
	int func;
	int read_letters;
	int total_letters = 0;
	char *buffer[1024]; /* pointer so this is 8x's size */

	if (!filename || !letters)
		return (0);

	func = open(filename, O_RDONLY);

	if (func == -1)
		return (0);


	read_letters = read(func, buffer, letters);

	if (read_letters == -1)
	{
		close(func);
		return (0);
	}

	total_letters = write(STDOUT_FILENO, buffer, read_letters);

	close(func);
	return (total_letters);
}

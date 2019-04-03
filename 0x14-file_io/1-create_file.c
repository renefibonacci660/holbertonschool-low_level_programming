#include "holberton.h"
/**
 * create_file - creates a file with rw permissions and places string in file
 * @filename: name of file to be created
 * @text_content: char string to be placed in file
 * Return: -1 if unsuccessful, 1 if successful
**/

int create_file(const char *filename, char *text_content)
{
	int func;
	int count;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	func = open(filename, O_CREAT | O_RDWR, 0600);

	if (func <= -1)
	{
		if (errno == EEXIST)
		{
			func = open(filename, O_WRONLY | O_TRUNC);
			if (func == -1)
				return (-1);
		}
		else
			return (-1);
	}
/* should be able to do this without looping write */
	for (count = 0; text_content[count] != '\0'; count++)
	{
		if (write(func, &text_content[count], 1) == -1)
			return (-1);
	}
	close(func);
	return (1);
}

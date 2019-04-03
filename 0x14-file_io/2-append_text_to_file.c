#include "holberton.h"
/**
 * append_text_to_file - Appends text at the end of a file if file exists
 * @filename: name of the file
 * @text_content: string to append to file
 * Return: 1 if the file exists,
 * -1 if the file does not exist or unable to access file permissions
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int func;
	int count;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	func = open(filename, O_APPEND | O_RDWR);

	if (func == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
	{
		if (write(func, &text_content[count], 1) == -1)
		{
			close(func);
			return (-1);
		}
	}
	close(func);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

int len_string(char *string);

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: pointer to strig that countain the name of the text file.
 * @text_content: pointer to strig with the content to write in the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opened_file;
	int bytes_writen;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		*text_content = '\n';
	}

	opened_file = open(filename, O_WRONLY | O_APPEND);
	if (opened_file == -1)
	{
		return (-1);
	}

	bytes_writen = write(opened_file, text_content, len_string(text_content));

	close(opened_file);
	if (bytes_writen == -1)
	{
		return (-1);
	}

	return (1);

}

/**
 * len_string - returns the length of a string.
 *
 * @string: pointer to string.
 * Return: length of string.
 */
int len_string(char *string)
{
	int length = 0;

	while (string[length++] != '\0')
	{
	}

	return (--length);
}

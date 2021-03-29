#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to standard output.
 *
 * @filename: pointer to strig that countain the name of the text file.
 * @letters: number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_to_read;
	unsigned int bytes_readed = 0, bytes_printed = 0;
	char *buffer;

	if (!filename || !letters)
	{
		return (0);
	}

	file_to_read = open(filename, O_RDONLY);
	if (file_to_read == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));

	bytes_readed = read(file_to_read, buffer, letters);

	close(file_to_read);

	bytes_printed = write(STDOUT_FILENO, buffer, bytes_readed);

	free(buffer);

	if (bytes_readed == bytes_printed)
	{
		return (bytes_readed);
	}
	else
	{
		return (0);
	}

}

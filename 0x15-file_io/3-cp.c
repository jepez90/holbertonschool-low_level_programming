#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void exit_on_error(char *s1, char *s2, int cod_error);

/**
  * main - enter point.
  *
  * @argc: number of arguments passed in call to program
  * @argv: array of arguments
  *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	ssize_t bytes_readed = 1024, bytes_writen;
	int file_from, file_to;
	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
		exit_on_error("Usage: cp file_from file_t%s\n", "o", 97);

	/*abrir archivo de origen*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_on_error("Error: Can't read from file %s\n", argv[1], 98);

	/*abrir archivo de destino*/
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		exit_on_error("Error: Can't write to %s\n", argv[2], 99);

	while (bytes_readed == 1024)
	{
		/*leer archivo de origen y guardar en buffer*/
		bytes_readed = read(file_from, buffer, 1024);
		if (bytes_readed == -1)
			exit_on_error("Error: Can't read from file %s\n", argv[1], 98);
		/*escribir el archivo de destino*/
		bytes_writen = write(file_to, buffer, bytes_readed);
		if (bytes_writen == -1)
			exit_on_error("Error: Can't write to %s\n", argv[2], 99);
	}

	free(buffer);
	if (close(file_to))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	if (close(file_from))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	if (close(file_to) || close(file_from))
		exit(100);

	return (0);
}

/**
 * exit_on_error - exits the program with cod_error and seting the stderr.
 *
 * @s1: pointer to string 1 to be concatenated
 * @s2: pointer to string 2 to be concatenated
 * @cod_error: number of bytes of s2 to be concatenated
 *
 * Return: pointer to the string result
 */
void exit_on_error(char *s1, char *s2, int cod_error)
{
	dprintf(STDERR_FILENO, s1, s2);
	exit(cod_error);
}
